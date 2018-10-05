// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:21:41 by otiniako          #+#    #+#             //
//   Updated: 2018/10/05 19:21:42 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap() {
	_Hit_points = 60;
	_Max_hit_points = 60;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 5;
	_Armor_damage_reduction = 0;
	_Name = "NONE";
	std::cout << "Default constructor for NinjaTrap called" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Destructor for NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other) {
	std::cout << "Copy from NinjaTrap called" << std::endl;
	*this = other;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name) {
	_Hit_points = 60;
	_Max_hit_points = 60;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 5;
	_Armor_damage_reduction = 0;
	_Name = name;
	std::cout << "Constructor for NinjaTrap called" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &rhs) {
	std::cout << "Equating from NinjaTrap called" << std::endl;

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

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << this->_Name << " use Razor Shuriken on " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << this->_Name << " use Shadow Slash on "<< target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << this->_Name << " use Death Mark on " << target.getName() << std::endl;
}

std::string NinjaTrap::getName(void) const {
    return this->_Name;
}