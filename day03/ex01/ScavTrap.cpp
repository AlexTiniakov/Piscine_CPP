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

ScavTrap::ScavTrap() {
	std::cout << "Default Constructor ScavTrap called" << std::endl;;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor for \"" << this->_Name << "\" ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy from \"" << other._Name << "\" ScavTrap called" << std::endl;
	*this = other;
}

ScavTrap::ScavTrap(std::string name) {
	this->_Name = name;
	this->_Hit_points = 100;
	this->_Max_hit_points = 100;
	this->_Energy_points = 50;
	this->_Max_energy_points = 50;
	this->_Level = 1;
	this->_Melee_attack_damage = 20;
	this->_Ranged_attack_damage = 15;
	this->_Armor_damage_reduction = 3;
	std::cout << "Constructor for \"" << name << "\" ScavTrap called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "Assigned from \"" << rhs._Name << "\" ScavTrap called" << std::endl;
	
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

void		ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " challenge " << target 
	<< " at range, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " challenge " << target 
	<< " at melee, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	this->_Hit_points -= (int)amount / this->_Armor_damage_reduction;
	this->_Hit_points = this->_Hit_points < 0 ? 0 : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " take Damage: -" << amount
	<< ". It was redoction up to: -"
	<< (int)amount / this->_Armor_damage_reduction
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	this->_Hit_points += (int)amount;
	this->_Hit_points = (this->_Hit_points > this->_Max_hit_points) ?
	this->_Max_hit_points : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " be Repaired: +" << amount 
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
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
