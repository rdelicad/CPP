/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:38:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/09 20:43:50 by rdelicad         ###   ########.fr       */
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

void ScalarConverter::convert(const std::string &input) 
{
	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "char: '" << input << "'" << std::endl;
	}
	else if (input[input.size() - 1] == 'f')
	{	
		char *end;
		float f = strtof(input.c_str(), &end); // ej: -42.0f, 3.0f, 67.0f
		if ((f <= 32 && f >= 0) || (f >= 127))
			std::cout << "char: Non displayable" << std::endl;
		else if (f < 0)
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(input[0]) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << *end << std::endl;
		std::cout << "double: " << f << std::endl;
	}
}