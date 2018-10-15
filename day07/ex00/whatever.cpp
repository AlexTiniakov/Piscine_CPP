/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:44:48 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/11 19:17:25 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template< typename T>
void swap(T & x, T & y) {
	T a = x;
	x = y;
	y = a;
}

template< typename T>
T & min(T & x, T & y) {
	return (x < y ? x : y);
}

template< typename T>
T & max(T & x, T & y) {
	return (x > y ? x : y);
}

int main()
{
	std::cout << "<-test from sub->\n";
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << "<-------int------->\n";
	int a_int = 4;
	int b_int = 1;
	std::cout << "before swap int: " << "a = " << a_int << "; b = " << b_int << "\n";
	swap(a_int, b_int);
	std::cout << "after swap int: " << "a = " << a_int << "; b = " << b_int << "\n";
	std::cout << "min(a, b): " << min(a_int, b_int) << "\n";
	std::cout << "max(a, b): " << max(a_int, b_int) << "\n\n";

	std::cout << "<------float------>\n";
	float a_float = 4.1;
	float b_float = 1.5;
	std::cout << "before swap float: " << "a = " << a_float << "; b = " << b_float << "\n";
	swap(a_float, b_float);
	std::cout << "after swap float: " << "a = " << a_float << "; b = " << b_float << "\n";
	std::cout << "min(a, b): " << min(a_float, b_float) << "\n";
	std::cout << "max(a, b): " << max(a_float, b_float) << "\n\n";

	std::cout << "<-------char------>\n";
	char a_char = 'A';
	char b_char = 'B';
	std::cout << "before swap char: " << "a = \'" << a_char << "\'; b = \'" << b_char << "\'\n";
	swap(a_char, b_char);
	std::cout << "after swap char: " << "a = \'" << a_char << "\'; b = \'" << b_char << "\'\n";
	std::cout << "min(a, b): " << min(a_char, b_char) << "\n";
	std::cout << "max(a, b): " << max(a_char, b_char) << "\n\n";

	std::cout << "<-------str------->\n";
	std::string a_str = "toto";
	std::string b_str = "pony";
	std::cout << "before swap str: " << "a = \'" << a_str << "\'; b = \'" << b_str << "\'\n";
	swap(a_str, b_str);
	std::cout << "after swap str: " << "a = \'" << a_str << "\'; b = \'" << b_str << "\'\n";
	std::cout << "min(a, b): " << min(a_str, b_str) << "\n";
	std::cout << "max(a, b): " << max(a_str, b_str) << "\n\n";
}