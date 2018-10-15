/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:27:24 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 19:49:10 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int				main(int ac, char **av)
{
	srand(time(0));
    std::list<int> list;
    int search;

	if (ac < 2 || (search = atoi(av[1])) < 0 || search > 9 || !(av[1][0] && av[1][0] >= '0' && av[1][0] <= '9' && !av[1][1])) {
		std::cout << "Enter value 0 - 9" << std::endl;
		return (0);
	}
    for (int i = 0; i < 10; i++)
	    list.push_back(rand() % 10);

	try {
		int ret = easyfind(list, search);
		std::cout << "Value '" << search << "' have index '" << ret << "'" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}

	return 0;
}
