// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 20:13:46 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 20:13:47 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <string>
#include "Zombie.hpp"


class ZombieHorde
{

public:
	ZombieHorde(int N);
	~ZombieHorde(void);

	void announce(void);

private:
	int		_N;
	Zombie	*_zombies;
	ZombieHorde(void);

};




#endif