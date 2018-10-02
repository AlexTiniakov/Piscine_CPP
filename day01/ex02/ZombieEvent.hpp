// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:16:58 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:17:00 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
#include "Zombie.hpp"


class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);

private:
	std::string _type;
};

#endif