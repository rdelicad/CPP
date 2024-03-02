/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:30:29 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/02 14:49:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

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

static void	checkFile(char *file)
{
	std::ifstream fileStream(file);
	if (!fileStream.good())
	{
		std::cout	<< "Este archivo no se puede leer, escribir o no existe"
					<< std::endl;
		fileStream.close();
		exit (0);
	}
	fileStream.close();
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		checkArgs(av);
		checkFile(av[1]);
	}
	else
	{
		std::system("clear");
		std::cout << "Uso:" << std::endl;
		std::cout << "./replace <filename> <string_1> <string_2>" << std::endl;
	}
	return 0;
}
