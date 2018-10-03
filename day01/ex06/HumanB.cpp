// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 23:21:36 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 23:21:38 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_club->getType()
	<< std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_club = &club;
}
