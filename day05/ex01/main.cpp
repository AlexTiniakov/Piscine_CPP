/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:49:52 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/09 00:11:43 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat Bob("Bob", 36);
    Bureaucrat Ted("Ted", 3);
    Form       Blank("Blank", 35, 50);

    std::cout << Bob << std::endl;
    std::cout << Ted << std::endl;
    std::cout << Blank << std::endl;
    Blank.beSigned(Bob);
    Blank.beSigned(Ted);
    Bob++;
    std::cout << Bob << std::endl;
    Blank.beSigned(Bob);
}