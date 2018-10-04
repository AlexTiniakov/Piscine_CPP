// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 23:04:31 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 23:04:32 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{}