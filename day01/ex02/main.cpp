// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:18:38 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:18:40 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	std::srand(time(0));
	ZombieEvent event;
	Zombie		zombie("Zzz...");
	Zombie		*zombie1;
	Zombie		*zombie2;
	
	zombie.type = "BLUE";
	zombie.announce();
	event.setZombieType("GREEN");
	zombie1 = event.newZombie("Zombieeee");
	zombie1->type = "RED";
	zombie1->announce();
	delete zombie1;
	zombie2 = event.randomChump();
	delete zombie2;
	return (0);
}