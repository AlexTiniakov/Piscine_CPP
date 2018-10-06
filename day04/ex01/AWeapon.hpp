/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:25:16 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:25:27 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

class AWeapon
{
	public:
		AWeapon();
		AWeapon(AWeapon const & src);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon &			operator=(AWeapon const & rhs);

		std::string const &	getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;
		virtual void		attack() const = 0;

	protected:
		std::string			_name;
		int					_apcost;
		int 				_damage;

};
#endif

