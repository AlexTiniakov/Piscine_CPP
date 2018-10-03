// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 20:56:18 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 20:56:19 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>

void		print_stream(std::istream &stream)
{
	std::string		buffer;

	while (!stream.eof())
	{
		getline(stream, buffer);
		std::cout << buffer << std::endl;
	}
}

void		print_file(std::string filename)
{
	struct stat		st;
	std::ifstream	file;

	lstat(filename.c_str(), &st);
	if (S_ISDIR(st.st_mode))
		std::cout << "cat: " << filename << ": Is a directory" << std::endl;
	else
	{
		file.open(filename);
		if (errno)
			std::cout << "cat: " << filename << ": "<< strerror(errno) << std::endl;
		else if (file.is_open())
		{
			print_stream(file);
			file.close();
		}
	}
}

int			main(int ac, char **av)
{
	if (ac > 1)
		for (int i = 1; i < ac; i++)
			print_file(av[i]);
	else
		print_stream(std::cin);
	return (0);
}