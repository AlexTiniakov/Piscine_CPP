// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:28:37 by otiniako          #+#    #+#             //
//   Updated: 2018/10/03 13:28:38 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>

int			main(int argc, char** argv)
{
	struct stat			st;
	std::string         s1;
    std::string         s2;
    std::string         buffer;
    std::string         output;
    std::string         filename;
	std::string			all_file;
	size_t				n;
	size_t				n1;

    if (argc < 4)
	{
		std::cout << "usage: ./main file <string_1> <string_2>" << std::endl;
		exit(1);
	}
	s1 = argv[2];
	s2 = argv[3];
	filename = argv[1];
	output = filename + ".replace";

	std::ifstream   readFile(filename);
	lstat(filename.c_str(), &st);
	if (S_ISDIR(st.st_mode))
	{
		std::cout << "ERROR: " << filename << ": Is a directory" << std::endl;
		return (0);
	}
	
	if (readFile.fail())
	{
	    std::cout << "Error!:(" << std::endl;
	    exit(2);
	}

	std::ofstream	outFile(output);
	while (std::getline(readFile, buffer))
	{
		all_file += buffer;
		all_file += "\n";
	}
	n = 0;
	while (all_file.find(s1, n) != std::string::npos)
	{
		all_file.replace((n1 = all_file.find(s1, n)), s1.length(), s2);
		n = n1 + s2.length();
	}
	outFile << all_file;

	readFile.close();
	outFile.close();
    return (0);
}
