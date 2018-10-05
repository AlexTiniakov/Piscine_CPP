// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:04:25 by otiniako          #+#    #+#             //
//   Updated: 2018/10/04 16:04:29 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap &rhs);
	FragTrap	&operator=(const FragTrap &rhs);
	FragTrap(std::string const name);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif