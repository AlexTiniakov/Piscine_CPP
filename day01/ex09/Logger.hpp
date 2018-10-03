// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 18:39:31 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 18:39:32 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <string>
# include <ctime>
# include <iostream>
# include <cstdlib>
#include <fstream>
#include <sstream>
#include <iomanip>

class Logger
{
private:
	std::string _name;
	void		_logToConsole(std::string login);
	void		_logToFile(std::string login);
	std::string	_makeLogEntry(std::string message);
	std::string	_add_timestamp(void);

public:
	Logger(std::string name);
	~Logger();
	void		log(std::string const & dest, std::string const & message);
};

struct t_f
{
	std::string action_name;
	void		(Logger::*func)(std::string);
};

#endif