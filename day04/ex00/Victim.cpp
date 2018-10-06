// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:14:12 by otiniako          #+#    #+#             //
//   Updated: 2018/10/06 15:14:13 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name) {
	_name = name;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;	
}

Victim::Victim(Victim & src) {
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;	
}

Victim &	Victim::operator=(Victim & rhs) {
	this->_name = rhs._name;
	return *this;
}

std::string	Victim::getName() const {
	return (this->_name);
}

std::ostream &	operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;	
	return o;
}

void	Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}