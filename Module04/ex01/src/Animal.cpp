/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:01:51 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/02 16:57:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout	<< "[Animal] Default constructor called"
				<< std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout	<< "[Animal] Constructor copy called"
				<< std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout	<< "[Animal] Destructor called"
				<< std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout	<< "[Animal] Operator called"
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
