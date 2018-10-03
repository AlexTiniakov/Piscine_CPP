// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 23:20:55 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 23:20:55 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{
	;
}

std::string	const & Weapon::getType(void) const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(void): _type("NONE")
{}
