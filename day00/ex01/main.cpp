// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 16:58:21 by otiniako          #+#    #+#             //
//   Updated: 2018/10/01 16:58:22 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Book.hpp"
#include <iostream>
#include <string>

int     main(void)
{
    int     	i;
	int			j;
    Book    	instance[8];
	std::string	command;
	std::string index;

    while (1)
	{
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, command) && std::cout << std::endl)
			break ;
		j = instance[0].get_nb_contacts();
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			if (j > 7)
			{
				std::cout << "Not enough spase in your Book..." << std::endl;
				continue ;
			}
			else
				instance[j].add();
		}
		else if (command == "SEARCH" && j)
		{
			i = -1;
			std::cout << "     index|First name| Last name|  Nickname" << std::endl;
			while (++i < j && std::cout << "         " << i + 1 << "|")
				instance[i].search();
			index = "";
			while (index == "" && std::cout << "Enter index: ")
			{
				if (!std::getline(std::cin, index) && std::cout << std::endl)
					exit(0);
				if (index.length() == 1 && index[0] >= 49  && index[0] <= 56
				&& ((int)index[0] - 49) < j)
					instance[(int)index[0] - 49].print_all();
				else
					std::cout << "Wrong index!" << std::endl;
			}
		}
		else if (command == "SEARCH" && !j)
			std::cout << "List of contacts is empty!" << std::endl;
    }
    return (0);
}