/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:49:52 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/08 21:14:21 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("A", 300);
    Bureaucrat b("B", 149);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    b--;
    std::cout << b << std::endl;
    b--;
     std::cout << b << std::endl;
    a++;
}