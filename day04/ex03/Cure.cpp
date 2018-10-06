/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:44:56 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 16:45:01 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(std::string const & type): AMateria("cure")
{
	(void)type;
}

Cure::Cure(Cure const & cpy): AMateria(cpy) {}

Cure::~Cure() {}

Cure*	Cure::clone(void) const
{
	Cure *	newcure = new Cure("cure");

	return (newcure);
}

void		Cure::use(ICharacter& target)
{
	setXP();
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}