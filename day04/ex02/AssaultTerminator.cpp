/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:39:37 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:39:41 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
	std::cout << "* teleports from space *" << std::endl;
	(void)src;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I'll be back ..." << std::endl;
}

void	AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attack with chainsfists *" << std::endl;
}

ISpaceMarine *	AssaultTerminator::clone( void ) const
{
    ISpaceMarine    *copy = new AssaultTerminator(*this);

	return (copy);
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return (*this);
}