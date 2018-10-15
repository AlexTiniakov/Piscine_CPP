/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:30:37 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/14 23:24:59 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Module.hpp"
#include <unistd.h>

Module::Module(void)
{
    return ;
}

Module::Module(Module const & src)
{
    *this = src;
    return ;
}

Module::~Module(void)
{
    return ;
}

Module & Module::operator=(Module const & src)
{
    (void)src;
    return (*this);
}

std::string     Module::getData(void)
{
    std::string CurDate;
    std::string Result;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    std::ostringstream convert;

    convert << tm.tm_year + 1900;
    CurDate = convert.str();
    Result = CurDate + "/";
    convert.str("");
    convert.clear();
    convert << tm.tm_mon + 1;
    Result = Result + convert.str() + "/";
    convert.str("");
    convert.clear();
    convert << tm.tm_mday;
    Result = Result + convert.str();
    return (Result);
}

std::string     Module::getTime(void)
{
    std::string CurDate;
    std::string Result;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    std::ostringstream convert;

    if (tm.tm_hour < 10)
    {
        convert << tm.tm_hour;
        Result = "0" + convert.str()+ ":";
    }
    else
    {
        convert << tm.tm_hour;
        Result = convert.str() + ":";
    }
    convert.str("");
    convert.clear();
    if (tm.tm_min < 10)
    {
        convert << tm.tm_min;
        Result = Result + "0" + convert.str()+ ":";
    }
    else
    {
        convert << tm.tm_min;
        Result = Result + convert.str() + ":";
    }
    convert.str("");
    convert.clear();
    if (tm.tm_sec < 10)
    {
        convert << tm.tm_sec;
        Result = Result + "0" + convert.str();
    }
    else
    {
        convert << tm.tm_sec;
        Result = Result + convert.str();
    }
    return (Result);
}

std::string     Module::getHostname(void)
{
    char        buf[50];
    std::string host;

    gethostname(buf, 1024);
    host = std::string(buf);
    return (host);
}

std::string      Module::getUsername(void)
{
    char        buf[50];
    std::string u_name;

    getlogin_r(buf, 1024);
    u_name = std::string(buf);
    return (u_name);
}

std::string      Module::getVersion(void)
{
    struct utsname buf;
    std::string version;

    uname(&buf);
    version = std::string(buf.sysname);
    version = version + "/" + std::string(buf.release);
    return (version);
}

std::string       Module::getCPU(void)
{
    char   tmp[100];
    size_t len = 100;
    std::string name;
    
    sysctlbyname("machdep.cpu.brand_string", &tmp, &len, NULL, 0);

    name = std::string(tmp);
    return (name);
}

std::string       Module::getCPU_core(void)
{
    int numCPU;
    std::string cores;
    std::ostringstream convert;
    
    numCPU = sysconf(_SC_NPROCESSORS_ONLN);
    convert << numCPU;
    cores = convert.str();
    return (cores);
}
#include <array>

std::string         Module::getCPU_process(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1 | grep Processes:","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::string str2 = process.substr(11, process.find(' ') - 6);
    return (str2);
}

std::string         Module::getCPU_threads(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1 | grep Processes:","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::size_t str2 = process.find("sleeping") + 9;
    std::string final = process.substr(str2, 6);
    std::string last = final.substr(1, 6);
    return (last);
}

std::string         Module::getCPU_usage(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1 | grep CPU","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::size_t str2 = process.find("usage:") + 7;
    std::string final = process.substr(str2, 35);
    return (final);
}

std::string         Module::getRam_used(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1 | grep PhysMem","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::size_t str2 = process.find("PhysMem:") + 9;
    std::string final = process.substr(str2, 5);
    return (final);
}

std::string         Module::getRam_free(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1 | grep PhysMem","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::size_t str2 = process.find("wired),") + 8;
    std::string final = process.substr(str2, 4);
    return (final);
}

std::string         Module::getNetwork_in(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1| grep Networks","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    std::size_t str2 = process.find("packets:") + 9;
    std::string final = process.substr(str2, 13);
    return (final);
}

std::string         Module::getNetwork_out(void)
{
    std::string process;
    std::string data[7];
	char buff[2048];
	std::string result = "";
	FILE * fp = popen("top -l 1| grep -w Networks | cut -d' ' -f5","r");	

	while (fgets( buff, 2048, fp )!=NULL)
  		result+= buff;
	pclose(fp);

	std::istringstream f(result);
    std::ostringstream convert;
    std::string line;    
    int i = 0;
    while (std::getline(f, line)) 
    {
    	line.erase(std::remove(line.begin(), line.end(), '%'), line.end());
    	line.erase(std::remove(line.begin(), line.end(), 'M'), line.end());
        data[i] = line;
        i++;
    }
    process = data[0];
    return (process);
}