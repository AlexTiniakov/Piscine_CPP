/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:47:26 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:47:27 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine( void ) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src ) {
	std::cout << "Tactical Marine ready for battle" << std::endl;	
	(void)src;
}

TacticalMarine::~TacticalMarine( void ) {
	std::cout << "Aaargh ..." << std::endl;
}

void	TacticalMarine::battleCry( void ) const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack( void ) const {
	std::cout << "* attack with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack( void ) const {
	std::cout << "* attack with chainsword *" << std::endl;
}

ISpaceMarine *	TacticalMarine::clone( void ) const {
	ISpaceMarine	*copy = new TacticalMarine(*this);
	return (copy);
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & rhs) {
	(void)rhs;
	return (*this);
}