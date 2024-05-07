/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:38:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/07 22:17:06 by rdelicad         ###   ########.fr       */
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

int typeChar(const std::string &type)
{
	if (type.size() == 1)
	{
		if (std::isalpha(type[0]))
			return 1;
		else
			return 2;
	}
	else
		return 3;
}


int typeInt(const std::string &input)
{
	(void)input;
	return 2;
}

int typeFloat(const std::string &input)
{
	(void)input;
	return 2;	
}

int typeDouble(const std::string &input)
{
	(void)input;
	return 3;
}

void display(const std::string input, const std::string &nameType, int status)
{
	std::string messages[3];
	messages[0] = "'" + input + "'";
	messages[1] = "Non displayable";
	messages[2] = "Impossible";

	if (status == 1)
		std::cout << nameType << messages[0] << std::endl;
	else if (status == 2)
		std::cout << nameType << messages[1] << std::endl;
	else if (status == 3)
		std::cout << nameType << messages[2] << std::endl;
}


void ScalarConverter::convert(const std::string &input)
{
	const std::string types[4] = {"char:	", "int:	", "float:	", "double:	"};
	int status[4];
	status[0] = typeChar(input);  
	status[1] = typeInt(input);
	status[2] = typeFloat(input);
	status[3] = typeDouble(input);

	//tenemos un array por ejemplo {1, 3, 1, 0}
	//con este numero llamamos a la funcion display

	int i = 0;
	while (i < 4)
	{
		display(input, types[i], status[i]);
		i++;
	}
	
	
}
