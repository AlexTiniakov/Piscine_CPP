/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:31:01 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:31:17 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

class AWeapon;

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src)
{}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

void			PlasmaRifle::attack() const{
	std::cout<< "* piouuu piouuu piouuu *" << std::endl;
}
