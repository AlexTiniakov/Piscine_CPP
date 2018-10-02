// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:15:38 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 17:15:42 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Heap");

	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony pony("Stack");
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
    return (0);
}