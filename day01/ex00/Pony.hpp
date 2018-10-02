// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:25:25 by otiniako          #+#    #+#             //
//   Updated: 2018/10/02 17:25:26 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP
# include <string>


class Pony
{

public:
	std::string	name;

    Pony(std::string name);
    ~Pony(void);

private:
	Pony(void);

};

#endif