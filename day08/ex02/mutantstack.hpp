/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 21:16:52 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 21:28:28 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
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
#include <stack>
#include <random>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:
    typedef std::list<int>::iterator iterator;
	MutantStack<T>(void) {}

    MutantStack(MutantStack const &r) {
    	(void)r;
    }

	~MutantStack<T>(void) {}

	MutantStack &operator=(MutantStack const &r){
		(void)r;
	}

	T top(void) {
		return (_stack.front());
	}

	T size(void) {
		return (_stack.size());
	}



    std::list<int>::iterator begin() {
    	return (_stack.begin());
    }

    std::list<int>::iterator end() {
    	return (_stack.end());
    }

    void push(T value) {
    	_stack.push_front(value);
    }

    void pop(void) {
    	_stack.pop_front();
    }

private:
    std::list<T>		_stack;

};

#endif