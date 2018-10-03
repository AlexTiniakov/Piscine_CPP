// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:01:48 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 17:01:48 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int main()
{
	Human		human;

	human.action("intimidatingShout", "first");
	human.action("rangedAttack", "second");
	human.action("meleeAttack", "third");
	return (0);
}
