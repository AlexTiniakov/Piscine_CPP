// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 18:39:14 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 18:39:14 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

Logger::Logger(std::string name): _name(name)
{}

Logger::~Logger()
{}

std::string	Logger::_makeLogEntry(std::string message)
{
	return this->_add_timestamp() + message;
}

std::string	Logger::_add_timestamp(void)
{
	static time_t	t;
	struct tm		*time_stamp;
	std::stringstream	str;

	time_stamp = localtime(&(t = time(0)));
	str << '[' << time_stamp->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_mon + 1
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_mday << '_'
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_hour
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_min
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_sec << "] ";
	
	return str.str();
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	t_f f[] = {{"console", &Logger::_logToConsole},
				{"file", &Logger::_logToFile}};
	
	for (int i = 0; i < 2; i++)
		if (dest == f[i].action_name)
			(this->*f[i].func)(message);
}

void		Logger::_logToConsole(std::string login)
{
	std::cout << this->_makeLogEntry(login) << std::endl;
}

void		Logger::_logToFile(std::string login)
{
	std::ofstream outFile(this->_name);

	outFile << this->_makeLogEntry(login) << std::endl;
}
