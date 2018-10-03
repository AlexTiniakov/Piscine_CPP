// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:01:36 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 17:01:37 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <iostream>

void Human::action(std::string const & action_name, std::string const & target)
{
	t_war war[] = {{"intimidatingShout", &Human::intimidatingShout},
					{"rangedAttack", &Human::rangedAttack},
					{"meleeAttack", &Human::meleeAttack}};

	for (int i = 0; i < 3; i++)
		if (action_name == war[i].action_name)
			(this->*war[i].func)(target);
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout - " + target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack - " + target << std::endl;
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack - " + target << std::endl;
}
