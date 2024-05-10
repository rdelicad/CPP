/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:38:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/10 15:09:03 by rdelicad         ###   ########.fr       */
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

bool isDigit(const std::string &input)
{
	size_t i = 0;
	while (i < input.size())
	{
		if (!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

bool isAlpha(const std::string &input)
{
	size_t i = 0;
	while (i < input.size())
	{
		if (!std::isalpha(input[i]))
			return false;
		i++;
	}
	return true;
}

bool isDigitSigno(const std::string &input)
{
	size_t i = 0;
	if (input[0] == '-' || input[0] == '+')
		i++;
	while (i < input.size())
	{
		if (!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

std::ostream &fixedOne(std::ostream& os)
{
	return os << std::fixed << std::setprecision(1);
}

void typeChar(const std::string &input, bool messageChar)
{
	if (input.size() == 1)
	{
		if (isAlpha(input))
			std::cout << "char: '" << static_cast<char>(input[0]) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (input.size() > 1)
	{
		if (input[0] == '-')
			std::cout << "char: Non displayable" << std::endl;
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		messageChar = false;
	}
	
	if (messageChar)
	{
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << fixedOne << static_cast<float>(input[0]) << "f" << std::endl;
		std::cout << "double: " << fixedOne << static_cast<double>(input[0]) << std::endl;
	}
}

void typeInt(const std::string &input)
{
	if (isDigit(input))
	{
		long num = std::atol(input.c_str());
		if (num < 0)
			typeChar("fail", false);
		else if ((num >= 0 && num <= 32) || (num >= 127))
			typeChar("0", false);
		else if (num < INT_MIN || num > INT_MAX)
			typeChar("-", false);
		else
			std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
		
		if (num < INT_MIN || num > INT_MAX)
		{
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double : impossible" << std::endl;
		}
		else
		{
			std::cout << "int: " << static_cast<int>(num) << std::endl;
			std::cout << "float: " << fixedOne << static_cast<float>(num) << "f" << std::endl;
			std::cout << "double: " << fixedOne << static_cast<double>(num) << std::endl;
		}
	}
	else if (!isDigit(input))
		typeChar(input, true);
		
}

void typeFloat(const std::string &input)
{
	if (input[input.size() - 1] == 'f' && std::isdigit(input[input.size() - 2]))
	{
		long numFloat = std::atol(input.c_str());
		char *end;
		float num = std::strtof(input.c_str(), &end);
		if (numFloat > INT_MAX)
		{
			std::cout << "char : Non displayable" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double : impossible" << std::endl;
		}
		else if (num < INT_MIN)
		{
			typeChar("0", false);
			std::cout << "int : impossible" << std::endl;
			std::cout << "float :" << static_cast<float>(num) << "f" << std::endl;
			std::cout << "double :" << static_cast<double>(num) << std::endl;
		}
		else if (num < 0)
			typeChar("-", false);
		else if ((num >= 0 && num <= 32) || (num >= 127))
			typeChar("0", false);
		else
		{
			std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(num) << std::endl;
		std::cout << "float: " << fixedOne << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << fixedOne << static_cast<double>(num) << std::endl;
	}
	else if (input[input.size() - 1] == 'f' && !std::isdigit(input[input.size() - 2]) && input.size() > 1)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (isAlpha(input) || !isDigitSigno(input))
		typeChar(input, true);
	else if (isDigitSigno(input))
		typeInt(input);
}

void ScalarConverter::convert(const std::string &input) 
{
	
	
	//typeChar(input);
	//typeInt(input);
	typeFloat(input);
	//typeDouble(input);


	
}