/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 20:25:38 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 21:17:32 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_H
# define Span_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <exception>
#include <string>
#include <random>

class	Span
{

	public:

		Span(void);
		Span(unsigned int n);
		Span(Span &obj);
		virtual ~Span(void);
		Span &operator=(Span const &r);

		struct StorageLimitException : public std::exception {
            virtual const char* what() const throw();
		};

		struct NotEnoughValuesException : public std::exception {
            virtual const char* what() const throw();
		};

		void			addNumber(int num);
		int				shortestSpan(void);
		int				longestSpan(void);

	private:
		std::vector<int>	_store;
		unsigned int		_size;

}; 


#endif