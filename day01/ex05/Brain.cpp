// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:00:23 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 21:00:24 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	std::stringstream	str;
	
	str << (void *)this;
	this->adr = str.str();
}

Brain::~Brain()
{
	;
}

std::string Brain::identify()
{
	return (this->adr);
}
