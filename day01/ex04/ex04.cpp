// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 20:50:24 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 20:50:24 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << *strPtr << '\n' << strRef << std::endl;
	return (0);
}