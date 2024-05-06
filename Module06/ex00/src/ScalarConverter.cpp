/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:38:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 19:19:13 by rdelicad         ###   ########.fr       */
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
	(void)input;
	// Function implementation
}
