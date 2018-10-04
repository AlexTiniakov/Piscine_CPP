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

FragTrap::FragTrap() {
	std::cout << "Default Constructor called" << std::endl;;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor for \"" << this->_Name << "\" called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Copy from \"" << other._Name << "\" called" << std::endl;
	*this = other;
}

FragTrap::FragTrap(std::string name) {
	this->_Name = name;
	this->_Hit_points = 100;
	this->_Max_hit_points = 100;
	this->_Energy_points = 100;
	this->_Max_energy_points = 100;
	this->_Level = 1;
	this->_Melee_attack_damage = 30;
	this->_Ranged_attack_damage = 20;
	this->_Armor_damage_reduction = 5;
	std::cout << "Constructor for \"" << name << "\" called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "Assigned from \"" << rhs._Name << "\" called" << std::endl;
	
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

void		FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target 
	<< " at range, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target 
	<< " at melee, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	this->_Hit_points -= (int)amount / this->_Armor_damage_reduction;
	this->_Hit_points = this->_Hit_points < 0 ? 0 : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " take Damage: -" << amount
	<< ". It was redoction up to: -"
	<< (int)amount / this->_Armor_damage_reduction
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {
	this->_Hit_points += (int)amount;
	this->_Hit_points = (this->_Hit_points > this->_Max_hit_points) ?
	this->_Max_hit_points : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " be Repaired: +" << amount 
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
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