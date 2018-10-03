// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 23:21:16 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 23:21:16 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club): _name(name), _club(club)
{}

HumanA::~HumanA()
{}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_club.getType()
	<< std::endl;
}
