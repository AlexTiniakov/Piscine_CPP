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
#include "ZombieHorde.hpp"

int	main()
{
	std::srand(time(0));
	ZombieHorde horde(12);

	horde.announce();
	return (0);
}