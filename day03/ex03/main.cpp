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

#include "NinjaTrap.hpp"

int		main()
{
	std::srand(time(0));
	FragTrap Frag("Frag");
	ScavTrap Scav("Scav");
	NinjaTrap Ninja("Ninja");
	NinjaTrap Ninja1("Ninja1");
	
	std::cout << std::endl;
	Frag.rangedAttack("blablabla");
	Frag.meleeAttack("boohboohbooh");
	Frag.takeDamage(42);
	Frag.takeDamage(4242);
	Frag.beRepaired(42);
	Frag.beRepaired(4242);
	std::cout << std::endl;
	Frag.vaulthunter_dot_exe("TARGET1");
	Frag.vaulthunter_dot_exe("TARGET2");
	Frag.vaulthunter_dot_exe("TARGET3");
	Frag.vaulthunter_dot_exe("TARGET4");
	Frag.vaulthunter_dot_exe("TARGET5");
	std::cout << std::endl;
	Scav.rangedAttack("blablabla");
	Scav.meleeAttack("boohboohbooh");
	Scav.takeDamage(42);
	Scav.takeDamage(4242);
	Scav.beRepaired(42);
	Scav.beRepaired(4242);
	std::cout << std::endl;
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	std::cout << std::endl;
	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	Ninja.ninjaShoebox(Ninja1);
	std::cout << std::endl;
	return (0);
}