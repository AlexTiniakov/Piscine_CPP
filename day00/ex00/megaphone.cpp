// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 16:10:23 by otiniako          #+#    #+#             //
//   Updated: 2018/10/01 16:10:28 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int     main(int ac, char **av)
{
    char c;
    int i, j;

    j = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (++j < ac)
        {
            i = -1;
            while ((c = av[j][++i]) != '\0')
            {
                std::cout << ((c >= 97 && c <= 122) ? (char)(c - ('a' - 'A')) :
                                                    c);
            }
        }
        std::cout << std::endl;
    }
    return (0);
}