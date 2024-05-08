/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:38:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/08 20:20:36 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "\033[2;34m[ScalarConverter] Constructor default\033[0m" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "\033[2;34m[ScalarConverter] Destructor called\033[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	std::cout << "[ScalarConverter] Operator called" << std::endl;
	return *this;
}

void typeChar(const std::string &input)
{
	int i = 0;
	int flag = 0;
	while (input[i])
	{
		if (!std::isalpha(input[i]))
		{
			// algun caracter no es alfabetico
			flag = 1;
			break;	
		}
		i++;
	}
	// todos son alfabeticos
	if (flag == 0)
	{
		// todo es alphabetico, convertir a char
		if (input.size() == 1)
		{
			char c = static_cast<char>(input[0]);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		else
		{
			// tiene mas de un caracter, mensaje Impossible
			std::cout << "char: impossible" << std::endl;
		}
	}
	// flag = 1
	else
	{
		// significa que puede ser o un numero o un caracter no imprimible
		if (i == 0)
		{
			if (!std::isalpha(input[0]) && !std::isdigit(input[0]))
				std::cout << "char: Non displayable" << std::endl;
		}
		else if (i > 0)
			std::cout << "char: impossible" << std::endl;
		// convertir int a char
		i = 0;
		while (input[i])
		{
			if (!std::isdigit(input[i]))
				flag = 2;
			i++;
		}
		// todos son numeros
		if (flag == 1)
		{
			int num = std::atoi(input.c_str());
			if (num > 32 && num < 127)
			{
				char c = static_cast<char>(num);
				std::cout << "char: '" << c << "'" << std::endl;
			}
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		// numeros con caracteres
		else 
		{
			// si es un float
			if (input.back() == 'f')
			{
				std::string numberPart = input.substr(0, input.size() - 1);
				int num = std::atoi(numberPart.c_str());
				if (num > 32 && num < 127)
				{
					char c = static_cast<char>(num);
					std::cout << "char: '" << c << "'" << std::endl;
				}
				else
					std::cout << "char: Non displayable" << std::endl;
			}
				
		}
		
	}
}

void ScalarConverter::convert(const std::string &input) 
{
	typeChar(input);
	/* typeInt(input);
	typeFloat(input);
	typeDouble(input); */
}