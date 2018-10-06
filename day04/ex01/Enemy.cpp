/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:00 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:30:08 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : _type(""), _HP(0)
{}

Enemy::Enemy(Enemy const & src) : _type(src._type), _HP(src._HP)
{}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _HP(hp)
{}

Enemy::~Enemy()
{}

std::string  const &	Enemy::getType() const {
	return _type;
}

int 					Enemy::getHP() const {
	return _HP;
}

void 					Enemy::takeDamage(int damage) {
	if (_HP > 0 && damage > 0)
	{
		if (_HP - damage <= 0)
			_HP = 0;
		else
			_HP -= damage;
	}
}

Enemy & 				Enemy::operator=(Enemy const & src) {
	_HP = src._HP;
	return *this;
}