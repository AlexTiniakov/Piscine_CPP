/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 20:19:47 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/11 20:32:24 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	srand(time(0));
	int	n = rand() % 10;
	Array<int> test(n);

	std::cout << "Array with size = " << test.size() << " is created!\nPut random values...\n";
	std::cout << "And print data...\n";
	try {
		for (int i = 0; i < (int)test.size(); i++)
			test[i] = rand() % 100;
		for (int i = 0; i <= (int)test.size(); i++)
			std::cout << "Array[" << i << "] = " << test[i] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Ooops...\n";
		std::cout << e.what() << std::endl;
	}

	return (0);
}