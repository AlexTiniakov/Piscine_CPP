// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:21:51 by otiniako          #+#    #+#             //
//   Updated: 2018/10/05 19:21:51 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{

public:
	NinjaTrap(void);
	~NinjaTrap(void);
	NinjaTrap(const NinjaTrap &rhs);
	NinjaTrap	&operator=(const NinjaTrap &rhs);
	NinjaTrap(std::string const name);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
    std::string getName(void) const;
};

#endif