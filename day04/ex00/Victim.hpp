// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:14:06 by otiniako          #+#    #+#             //
//   Updated: 2018/10/06 15:14:07 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(std::string name);
	Victim(Victim & src);
	virtual ~Victim(void);

	Victim			&operator=(Victim & rhs);	
	std::string		getName(void) const;
	virtual void	getPolymorphed(void) const;

protected:
	std::string		_name;
};

std::ostream		&operator<<(std::ostream & o, Victim const & rhs);

#endif