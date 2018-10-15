/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 20:19:58 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/11 20:23:43 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>

template <typename T>
class Array
{
public:
	Array<T>(void) : _array(NULL), _n(0) {}

	Array<T>(unsigned int n) {
		_n = n;
		_array = new T[n];
	}

	Array<T>(Array const &r) {
		*this = r;
	}

	Array<T> &operator=(Array const &rhs) {
		int i = -1;

		this->_n = rhs._n;
		delete this->_array;
		this->_array = new T[this->_n];

		while (++i < this->_n)
			this->_array[i] = rhs._array[i];
	}

	~Array<T>(void) {}


	T	&operator[](unsigned int n) {
		if (n >= this->_n)
			throw std::exception();
		return (this->_array[n]);
	}

	unsigned int size() const {
		return (this->_n);
	}


private:
	T*				_array;
	unsigned int	_n;

};

#endif