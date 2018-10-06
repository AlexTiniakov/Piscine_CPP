// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:14:26 by otiniako          #+#    #+#             //
//   Updated: 2018/10/06 15:14:27 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
public:
	Peon(void);
	Peon(std::string name);
	Peon(Peon & src);
	virtual ~Peon(void);

	virtual void	getPolymorphed(void) const;
};

std::ostream		&operator<<(std::ostream & o, Peon const & rhs);

#endif