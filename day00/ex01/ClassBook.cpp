// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 16:58:38 by otiniako          #+#    #+#             //
//   Updated: 2018/10/01 16:58:39 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassBook.hpp"
#include <iostream>
#include <string>

Book::Book(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->login = "";
	this->postal_address = "";
	this->email_address = "";
	this->phone_number = "";
	this->birthday_date = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";
}

Book::~Book(void)
{
	;
}

int		Book::get_nb_contacts(void)
{
	return Book::_nb_contacts;
}

void	Book::add(void)
{
	while (this->first_name == "" && std::cout << "First name: ")
		if (!std::getline(std::cin, this->first_name) && std::cout << std::endl)
			exit(0);
	while (this->last_name == "" && std::cout << "Last name: ")
		if (!std::getline(std::cin, this->last_name) && std::cout << std::endl)
			exit(0);
	while (this->nickname == "" && std::cout << "Nickname: ")
		if (!std::getline(std::cin, this->nickname) && std::cout << std::endl)
			exit(0);
	while (this->login == "" && std::cout << "Login: ")
		if (!std::getline(std::cin, this->login) && std::cout << std::endl)
			exit(0);
	while (this->postal_address == "" && std::cout << "Postal address: ")
		if (!std::getline(std::cin, this->postal_address) && std::cout << std::endl)
			exit(0);
	while (this->email_address == "" && std::cout << "Email address: ")
		if (!std::getline(std::cin, this->email_address) && std::cout << std::endl)
			exit(0);
	while (this->phone_number == "" && std::cout << "Phone number: ")
		if (!std::getline(std::cin, this->phone_number) && std::cout << std::endl)
			exit(0);
	while (this->birthday_date == "" && std::cout << "Birthday date: ")
		if (!std::getline(std::cin, this->birthday_date) && std::cout << std::endl)
			exit(0);
	while (this->favorite_meal == "" && std::cout << "Favorite meal: ")
		if (!std::getline(std::cin, this->favorite_meal) && std::cout << std::endl)
			exit(0);
	while (this->underwear_color == "" && std::cout << "Underwear color: ")
		if (!std::getline(std::cin, this->underwear_color) && std::cout << std::endl)
			exit(0);
	while (this->darkest_secret == "" && std::cout << "Darkest secret: ")
		if (!std::getline(std::cin, this->darkest_secret) && std::cout << std::endl)
			exit(0);
	Book::_nb_contacts += 1;
}

void	Book::search(void)
{
	this->get_out(first_name);
	std::cout << "|";
	this->get_out(last_name);
	std::cout << "|";
	this->get_out(nickname);
	std::cout << std::endl;
}

void	Book::get_out(std::string str)
{
	int i = -1;

	if (str.length() > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		while (++i < (10 - (int)str.length()))
			std::cout << " ";
		std::cout << str;
	}
}

void	Book::print_all(void)
{
	std::cout << "First name:      " << this->first_name << std::endl;
	std::cout << "Last name:       " << this->last_name << std::endl;
	std::cout << "Nickname:        " << this->nickname << std::endl;
	std::cout << "Login:           " << this->login << std::endl;
	std::cout << "Postal address:  " << this->postal_address << std::endl;
	std::cout << "Email address:   " << this->email_address << std::endl;
	std::cout << "Phone number:    " << this->phone_number << std::endl;
	std::cout << "Birthday date:   " << this->birthday_date << std::endl;
	std::cout << "Favorite meal:   " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret:  " << this->darkest_secret << std::endl;
}

int 	Book::_nb_contacts = 0;
