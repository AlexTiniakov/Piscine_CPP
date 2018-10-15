/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 13:06:54 by ybokina           #+#    #+#             */
/*   Updated: 2018/10/14 23:21:57 by ybokina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP
# define C_NONE			"\033[0m"
# define C_RED			"\033[31m"
# define C_GREEN		"\033[32m"
# define C_BROWN		"\033[33m"
# define C_BLUE			"\033[34m"
# define C_WHITE		"\033[37m"
# define C_CYAN			"\033[36m"
# define C_MAGENTA		"\033[35"
# define C_PINK			"\e[38;5;175m"
# define C_PURPLE		"\033[01;38;05;55m"
#include <iostream>
#include <ncurses.h>
#include <curses.h>

class IMonitorModule
{
public:
	virtual ~IMonitorModule() {}
	virtual std::string getData() = 0;
	virtual std::string getTime() = 0;
	virtual std::string getHostname() = 0;
	virtual std::string getUsername() = 0;
	virtual std::string getVersion() = 0;
	virtual std::string getCPU() = 0;
	virtual std::string getCPU_core() = 0;
	virtual std::string getCPU_process() = 0;
	virtual std::string getCPU_threads() = 0;
	virtual std::string getCPU_usage() = 0;
	virtual std::string getRam_used() = 0;
	virtual std::string getRam_free() = 0;
	virtual std::string getNetwork_in() = 0;
	virtual std::string getNetwork_out() = 0;
};

#endif
