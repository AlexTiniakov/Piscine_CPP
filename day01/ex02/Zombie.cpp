// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:16:15 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:16:15 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	this->_name = "NONE";
	this->_type = "NONE";
}

Zombie::~Zombie()
{}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type
	<< ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::set_type(std::string type)
{
	this->_type = type;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}