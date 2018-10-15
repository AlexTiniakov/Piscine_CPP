/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:44:15 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/10 21:45:21 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>

class	Conversion
{

	public:

		Conversion(void);
		Conversion(std::string input);
		Conversion(Conversion &obj);
		virtual ~Conversion(void);
		Conversion &operator=(Conversion const &r);

		struct ConversionErrorException : public std::exception {
				virtual const char* what() const throw();
		};

		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;


	private:

		std::string _input;


}; 


#endif