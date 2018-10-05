// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 23:03:06 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 23:03:06 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	_Energy_points = 50;
	_Max_energy_points = 50;
	_Melee_attack_damage = 20;
	_Ranged_attack_damage = 15;
	_Armor_damage_reduction = 3;
	_Name = "NONE";
	std::cout << "Default constructor for ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor for ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy from ScavTrap called" << std::endl;
	*this = other;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_Energy_points = 50;
	_Max_energy_points = 50;
	_Melee_attack_damage = 20;
	_Ranged_attack_damage = 15;
	_Armor_damage_reduction = 3;
	_Name = name;
	std::cout << "Constructor for ScavTrap called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "Equating from ScavTrap called" << std::endl;
	
	this->_Name = rhs._Name;
	this->_Hit_points = rhs._Hit_points;
	this->_Max_hit_points = rhs._Max_hit_points;
	this->_Energy_points = rhs._Energy_points;
	this->_Max_energy_points = rhs._Max_energy_points;
	this->_Level = rhs._Level;
	this->_Melee_attack_damage = rhs._Melee_attack_damage;
	this->_Ranged_attack_damage = rhs._Ranged_attack_damage;
	this->_Armor_damage_reduction = rhs._Armor_damage_reduction;
	return (*this);
}

void		ScavTrap::challengeNewcomer() {
	std::string challenge[] = {"WAR", "MARAPHON", "BUTTLE", "RACE", "FIGHT"};
	
	if (this->_Energy_points >= 25) {
		this->_Energy_points -= 25;
		std::cout << "FR4G-TP " << this->_Name << " take challenge "
		<< challenge[(rand() % 5)] << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_Name << " hasn't enoght energy points!" << std::endl;
}
