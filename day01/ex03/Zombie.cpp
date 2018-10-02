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
	this->name = "NONE";
	this->type = "NONE";
}

Zombie::~Zombie()
{
	;
}

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type
	<< ")> Braiiiiiiinnnssss..." << std::endl;
}