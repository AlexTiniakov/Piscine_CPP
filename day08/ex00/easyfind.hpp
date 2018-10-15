/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:27:13 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 19:49:11 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>
#include <list>

template <typename T>
int		easyfind(T list, int value)
{

	std::list<int>::const_iterator			beg = list.begin();
	ptrdiff_t	i = 0;

	try {
		while (beg != list.end()) {
			if (*beg == value)
				return (i);
			beg++;
			i++;
		}
	}
	catch (std::exception& e) {
		throw std::exception();
	}
	if (beg != list.end())
		return (i);
	throw std::exception();
}


#endif