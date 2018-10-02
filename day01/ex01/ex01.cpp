// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:09:36 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:09:37 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
