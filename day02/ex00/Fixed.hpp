// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 23:04:18 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 23:04:19 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	/* data */
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);

	Fixed & operator=(Fixed const &rhs);
};




#endif