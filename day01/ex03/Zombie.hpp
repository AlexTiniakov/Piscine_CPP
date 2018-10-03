// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:16:36 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 18:16:36 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{

public:
	Zombie(void);
	~Zombie(void);

	void		announce(void);
	void		set_type(std::string type);
	void		set_name(std::string name);

private:
	std::string	_name;
	std::string	_type;

};



#endif