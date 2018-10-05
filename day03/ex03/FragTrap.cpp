// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:04:20 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 16:04:21 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	_Energy_points = 100;
	_Max_energy_points = 100;
	_Melee_attack_damage = 30;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;
	_Name = "NONE";
	std::cout << "Default constructor for FragTrap called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor for FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Copy from FragTrap called" << std::endl;
	*this = other;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name) {
	_Energy_points = 100;
	_Max_energy_points = 100;
	_Melee_attack_damage = 30;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;
	_Name = name;
	std::cout << "Constructor for FragTrap called" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "Equating from FragTrap called" << std::endl;

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

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[] = {"Meteor", "NLO", "Big Hand", "Small Mouse", "Pure kitten"};
	
	if (this->_Energy_points >= 25) {
		this->_Energy_points -= 25;
		std::cout << "FR4G-TP " << this->_Name << " uses "
		<< attacks[(rand() % 5)] << " on " << target
		<< " and has now " << this->_Energy_points
		<< " energy points left!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_Name << " hasn't enoght energy points!" << std::endl;
}

std::string FragTrap::getName(void) const {
    return this->_Name;
}