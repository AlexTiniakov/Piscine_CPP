/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:14:46 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/11 19:27:52 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int length, void (*f)(T const &)) {
	if (array)
		for (int i = 0; i < length; i++)
			f(array[i]);
}

template <typename T>
void print(T const & x){
	std::cout << x << " ";
}

int main()
{
	std::cout << "<-------int------->\n";
	int a_int[] = {4, 5, 5, 4, 7, 9, 0};
	iter(a_int, 7, &print);
	std::cout << "\n\n";

	std::cout << "<------float------>\n";
	float a_float[] = {4.8, 5.6, 5.5, 4.3, 7.9, 9.2, 0.1};
	iter(a_float, 7, &print);
	std::cout << "\n\n";
	

	std::cout << "<-------char------>\n";
	char a_char[] = {'A', 'B', 'C'};
	iter(a_char, 3, &print);
	std::cout << "\n\n";

	std::cout << "<-------str------->\n";
	std::string a_str[] = {"toto", "pony", "42", "template"};
	iter(a_str, 4, &print);
	std::cout << "\n";

	
}