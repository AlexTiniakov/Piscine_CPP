// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:00:51 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 21:00:52 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

std::string	Human::identify(void)
{
	return (this->_brain.identify());
}

Brain Human::getBrain(void)
{
	return (this->_brain);
}