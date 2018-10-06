/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:32:48 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:33:03 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include <iostream>
#include "AWeapon.hpp"

class PowerFist  : public AWeapon
{
	public:
		PowerFist(PowerFist const & src);
		PowerFist();
		~PowerFist();
		using AWeapon::operator=;

		void			attack() const;
};
#endif
