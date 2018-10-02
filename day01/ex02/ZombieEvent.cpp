// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:16:48 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:16:48 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent()
{
	this->_type = "NONE";
}

ZombieEvent::~ZombieEvent()
{
	;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);

	zombie->type = this->_type;
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string names[] = {"Big", "Small", "Tall", "Lazy", "Beauty"};
	Zombie		*zombie = newZombie(names[rand() % 5]);

	zombie->type = this->_type;
	zombie->announce();
	return (zombie);
}