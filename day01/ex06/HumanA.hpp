// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 23:21:26 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 23:21:26 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>


class HumanA
{
private:
	Weapon		&_club;
	std::string	_name;

	HumanA(void);

public:
	HumanA(std::string name, Weapon &club);
	~HumanA(void);
	
	void	attack(void) const;
	
};

#endif
