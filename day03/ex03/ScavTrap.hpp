// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 23:03:18 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 23:03:18 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:
	ScavTrap(void);//+
	~ScavTrap(void);//+
	ScavTrap(const ScavTrap &rhs);//+
	ScavTrap(std::string name);//+
	ScavTrap	&operator=(const ScavTrap &rhs);
	void		challengeNewcomer(void);
	std::string getName(void) const;
};

#endif