/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:30:29 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 12:17:30 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

static void	checkArgs(char **av)
{
	std::string	file;
	std::string s1;
	std::string s2;

	file = av[1];
	s1 = av[2];
	s2 = av[3];
	if (!(file.rfind(".txt") == file.length() - 4))
	{
		std::cout << "Error: este archivo no es de texto (.txt)"
		<< std::endl;
		exit (0);
	}
	if (s1 == "" || s2 == "")
	{
		std::cout << "Debes escribir algo como argumento" << std::endl;
		exit (0);
	}
	
}

static void	checkFile(std::string file)
{
	std::ifstream inFile(file.c_str());
	if (!inFile.good())
	{
		std::cout	<< "Este archivo no se puede leer, escribir o no existe"
					<< std::endl;
		inFile.close();
		exit (0);
	}
	inFile.close();
}

static void	replaceFile(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		newFile;
	std::string		line;
	size_t			pos;

	inFile.open(fileName.c_str());
	if (!inFile)
		checkFile(fileName);
	newFile = fileName + ".replace";
	outFile.open(newFile.c_str());
	if (!outFile)
		checkFile(newFile);
	while (std::getline(inFile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.size());
			pos += s2.size();
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		checkArgs(av);
		replaceFile(av[1], av[2], av[3]);
	}
	else
	{
		std::system("clear");
		std::cout << "Uso:" << std::endl;
		std::cout << "./replace <filename> <string_1> <string_2>" << std::endl;
	}
	return 0;
}
