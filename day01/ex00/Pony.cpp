// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:25:30 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 17:25:31 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name): name(name)
{
    std::cout << this->name << " pony was born!" << std::endl;
}

Pony::~Pony()
{
    std::cout << this->name << " pony was died!" << std::endl;
}

Pony::Pony(void)
{
	;
}