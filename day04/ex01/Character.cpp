/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:25:41 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:26:57 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include <string>

class Enemy;
class AWeapon;

Character::Character(std::string const & name) : _name(name), _weapon(NULL), _AP(40)
{}

Character::Character() : _name(""), _weapon(NULL), _AP(40)
{}

Character::Character(Character const & src) : _name(src._name), _weapon(src._weapon), _AP(src._AP)
{}

Character::~Character()
{}

Character & Character::operator=(Character const & src){
	_AP = src._AP;
	_weapon = src._weapon;
	return *this;
}

void Character::recoverAP(){
	if (_AP + 10 > 40)
		_AP = 40;
	else
		_AP += 10;
}

void Character::equip(AWeapon* weapon){
	_weapon =  weapon;
}

void Character::attack(Enemy* enemy){
	if (_AP >= _weapon->getAPCost())
	{
		_AP -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		std::cout << _name <<" attacks "<< enemy->getType() <<" with a "<< _weapon->getName() << std::endl;
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::string const &	Character::getName() const {
	return _name;
}

int  			Character::getAP() const {
	return _AP;
}

AWeapon *		Character::getWeapon() const {
	return _weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & src) {
	if (src.getWeapon())
		o << src.getName()<< " has "<< src.getAP() <<" AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		o << src.getName()<< " has "<< src.getAP() <<" AP and is unarmed" << std::endl;
	return o;
}