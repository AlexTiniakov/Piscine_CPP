// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:01:03 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 21:01:03 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"

class Human
{

public:
	Human();
	~Human();

	std::string	identify(void);
	Brain getBrain(void);

private:
	Brain _brain;
};

#endif