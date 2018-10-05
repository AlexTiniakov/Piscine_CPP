// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 16:59:48 by otiniako          #+#    #+#             //
//   Updated: 2018/10/05 16:59:48 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_Name = "NONE";
	this->_Hit_points = 100;
	this->_Max_hit_points = 100;
    this->_Level = 1;
    std::cout << "Default constructor for ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor for ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	
	this->_Name = name;
	this->_Hit_points = 100;
	this->_Max_hit_points = 100;
    this->_Level = 1;
	std::cout << "Constructor for ClapTrap \"" << name << "\" called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    std::cout << "Copy for ClapTrap called" << std::endl;
    *this = rhs;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
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

void		ClapTrap::setName(std::string name)
{
	this->_Name = name;
}

void		ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target 
	<< " at range, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target 
	<< " at melee, causing " << this->_Ranged_attack_damage
	<< " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	this->_Hit_points -= ((int)amount / this->_Armor_damage_reduction);
	this->_Hit_points = this->_Hit_points < 0 ? 0 : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " take Damage: -" << amount
	<< ". It was redoction up to: -"
	<< (int)amount / this->_Armor_damage_reduction
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	this->_Hit_points += (int)amount;
	this->_Hit_points = (this->_Hit_points > this->_Max_hit_points) ?
	this->_Max_hit_points : this->_Hit_points;
	std::cout << "FR4G-TP " << this->_Name << " be Repaired: +" << amount 
	<< ". Total Hit points left: " << this->_Hit_points << std::endl;
}