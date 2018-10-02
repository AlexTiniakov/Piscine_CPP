// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 16:58:44 by otiniako          #+#    #+#             //
//   Updated: 2018/10/01 16:58:45 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BOOK_H
# define BOOK_H
# include <string>


class Book
{

public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	
    Book(void);
    ~Book(void);

	void		add(void);
	void		search(void);
	void		get_out(std::string);
	void		print_all(void);
	static int  get_nb_contacts(void);

private:
    static int _nb_contacts;
};



#endif