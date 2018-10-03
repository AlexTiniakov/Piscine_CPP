// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 18:39:42 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 18:39:43 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

int main()
{
	Logger login("test");

	login.log("file", "its to file");
	login.log("console", "its to console");
	return (0);
}