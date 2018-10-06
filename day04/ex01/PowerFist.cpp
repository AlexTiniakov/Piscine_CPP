/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:32:20 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:33:17 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

class AWeapon;

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src)
{}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

void			PowerFist::attack() const{
	std::cout<< "* pschhh... SBAM! *" << std::endl;
}
