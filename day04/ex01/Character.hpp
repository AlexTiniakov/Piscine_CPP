/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:27:08 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:28:54 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string const	_name;
		AWeapon	*			_weapon;
		int					_AP;

	public:
		Character(std::string const & name);
		Character();
		Character(Character const &);
		~Character();
		Character & operator=(Character const &);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const &	getName() const;
		int 				getAP()const;
		AWeapon *			getWeapon()const;
};

std::ostream & operator<<(std::ostream & o, Character const & src);

#endif
