// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 20:13:11 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 20:13:11 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N)
{
	std::string names[] = {"Big", "Small", "Tall", "Lazy", "Beauty"};
	std::string types[] = {"BLUE", "GREEN", "RED"};
	this->_N = N;
	if (N > 0)
	{
		this->_zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			this->_zombies[i].name = names[rand() % 5];
			this->_zombies[i].type = types[rand() % 3];
		}
	}
}

ZombieHorde::~ZombieHorde()
{
	if (this->_N > 0)
		delete []this->_zombies;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < _N; i++)
			this->_zombies[i].announce();
}