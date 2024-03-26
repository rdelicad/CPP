/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:01:51 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/26 20:18:30 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout	<< "Default constructor Animal called"
				<< std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout	<< "Constructor copy Animal called"
				<< std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout	<< "Destructor Animal called"
				<< std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout	<< "Operator Animal called"
				<< std::endl;
	
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "???????" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}
