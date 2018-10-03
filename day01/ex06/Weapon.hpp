// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 23:21:05 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 23:21:06 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string	const & getType(void) const;
	void		setType(std::string type);

private:
	std::string _type;
	
	Weapon(void);

};




#endif