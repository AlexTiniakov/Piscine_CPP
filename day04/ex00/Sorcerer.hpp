// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:13:42 by otiniako          #+#    #+#             //
//   Updated: 2018/10/06 15:13:43 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
public:
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer & src);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer & rhs);	
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(Victim const & rhs) const;

private:
	std::string	_name;
	std::string	_title;
};

std::ostream 	&operator<<(std::ostream & o, Sorcerer const & rhs);

#endif