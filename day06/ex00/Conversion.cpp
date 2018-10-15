/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:44:26 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 21:48:50 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string input) : _input(input) {}

Conversion::Conversion(Conversion &obj)  {
	*this = obj;
}

Conversion::~Conversion(void) {}

Conversion &Conversion::operator=(Conversion const &r) {
	this->_input = r._input;
	return (*this);
}

Conversion::operator char(void) const {
	int ret = 0;

	try {
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e) {
		throw (ConversionErrorException());
	}
	return (static_cast<char>(ret));
}

Conversion::operator int(void) const {
	int ret = 0;
	try {
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e) {
		throw (ConversionErrorException());
	}
	return (ret);
	
}

Conversion::operator float(void) const {
	float ret = 0.0;
	try {
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e) {
		throw (ConversionErrorException());
	}
	return (ret);
}

Conversion::operator double(void) const {
	float ret = 0.0;
	try {
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e) {
		throw (ConversionErrorException());
	}
	return (ret);
}

const char* Conversion::ConversionErrorException::what() const throw() {
	return ("impossible");
}