/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 20:25:34 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/12 20:44:21 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _size(n)
{
	_store.reserve(n);
}

Span::Span(Span &obj)  {
	*this = obj;
}

Span::~Span(void) {}

Span &Span::operator=(Span const &r) {
	this->_store = r._store;
	return (*this);
}

void		Span::addNumber(int num) {
	if (_store.size() < _size)
		_store.push_back(num);
	else
		throw Span::StorageLimitException();
}

int			Span::shortestSpan(void) {
	if (_size <= 1)
		throw Span::NotEnoughValuesException();
    std::vector<int>		copy = _store;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator it  = copy.begin();
	std::vector<int>::iterator one = copy.begin();
	std::vector<int>::iterator two = copy.end();
	it++;
	two--;
	unsigned int i = 0;
	
	while (i < (_size - 1))
	{
		if (abs(*one - *it) < abs(*one - *two))
			two = it;
		else if (abs(*two - *it) < abs(*one - *two))
			one = it;
		i++;
		it++;
	}
	return (abs(*one - *two));
}

int			Span::longestSpan(void)
{
	if (_size <= 1)
		throw Span::NotEnoughValuesException();
	std::vector<int>	max = _store;
	return(*std::max_element(max.begin(), max.end()) - *std::min_element(max.begin(), max.end()));
}

const char* Span::StorageLimitException::what() const throw()
{
	return ("Error: Storage capacity is maxed.");
}

const char* Span::NotEnoughValuesException::what() const throw()
{
	return ("Error: Not enough values in storage to determine span");
}