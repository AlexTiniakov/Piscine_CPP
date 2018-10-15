/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybokina <ybokina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:54:26 by ybokina           #+#    #+#             */
/*   Updated: 2018/10/14 23:20:32 by ybokina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"
#include "Module.hpp"
#include "DisplayVisual.hpp"
#include "DisplayText.hpp"
#include <time.h>
#include <unistd.h>
#include <limits.h>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

void				eof_error(void)
{
	endwin();
	std::cout <<C_RED << "./ft_gkrellm: ERROR !" << C_NONE << std::endl;
	exit(1);
}

int					main(void)
{
	std::string line;

	std::cout <<C_BLUE << "Welcome! Choose the mode, please:" << std::endl;
	std::cout << "[1]. Text mode;" << std::endl;
	std::cout << "[2]. Graphic mode;" << C_NONE << std::endl << std::endl;

	std::cout << "$> ";
	if ((std::getline(std::cin, line)) == 0)
		eof_error();
	else
	{
		Module mod;
		if (line == "1")
		{
			DisplayText disp;
			disp.print(mod);
		}
		else if (line == "2")
		{
			DisplayVisual disp(mod);
			try {
				disp.loop(mod);
			}
			catch (std::exception &e ) {}
		}
		else {
			std::cout << "WRONG !" << std::endl;
			exit(1);
		}
	}
	return (0);
}
