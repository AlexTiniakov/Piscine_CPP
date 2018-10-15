/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 20:25:50 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 21:14:51 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(int ac, char **av)
{
    srand(time(0));
    unsigned int i;
	if (ac < 2 || (i = atoi(av[1])) == 0) { 
		std::cout << "Enter value > 0" << std::endl;
		return (0);
	}

	Span test(i);
	unsigned int x = 0;
	int y = 0;

	std::cout << "Vector with size = " << i << " is created:" << std::endl;
	while (x < i)
	{
		y = rand() % 10000;
		test.addNumber(y);
		std::cout << y << " ";
		x++;
	}

	try
	{
		std::cout << std::endl << std::endl << "Smallest: " << test.shortestSpan() << std::endl <<
		"Largest: " << test.longestSpan() << std::endl << std::endl <<
		"Catch exprassion:" << std::endl;
	}
	catch (Span::NotEnoughValuesException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Not enough values to find any span." << std::endl;
	}

	try
	{
		test.addNumber(rand() % 10000);
	}
	catch (Span::StorageLimitException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	return (0);
}