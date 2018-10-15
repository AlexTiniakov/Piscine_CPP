/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:44:35 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 21:49:35 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "You must enter one value to convert." << std::endl;
		return (0);
	}
	Conversion test(av[1]);
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "char: ";
	try
	{
		int check = static_cast<int>(test);

		if (check >= 33 && check <= 126)
			std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(test) << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(test) << "f" << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(test) << std::endl;
	}
	catch (Conversion::ConversionErrorException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "WTF?" << std::endl;
	}

	return (0);
}