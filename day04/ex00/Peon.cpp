// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:14:31 by otiniako          #+#    #+#             //
//   Updated: 2018/10/06 15:14:32 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
	this->_name = name;
}

Peon::Peon(Peon & src): Victim(src) {
	std::cout << "Zog zog." << std::endl;
	*this = src;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;	
}

std::ostream &	operator<<(std::ostream & o, Peon const & rhs) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;	
	return o;
}

void	Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}