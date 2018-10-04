// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:04:39 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 16:04:39 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int		main()
{
	std::srand(time(0));
	FragTrap frag("GreatName");
	FragTrap frag1(frag);
	FragTrap frag2;

	frag2 = frag;
	std::cout << std::endl;
	frag.rangedAttack("blablabla");
	frag.meleeAttack("boohboohbooh");
	frag.takeDamage(42);
	frag.takeDamage(4242);
	frag.beRepaired(42);
	frag.beRepaired(4242);
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("TARGET1");
	frag.vaulthunter_dot_exe("TARGET2");
	frag.vaulthunter_dot_exe("TARGET3");
	frag.vaulthunter_dot_exe("TARGET4");
	frag.vaulthunter_dot_exe("TARGET5");
	std::cout << std::endl;
	return (0);
}