/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:51:33 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/26 20:17:50 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout	<< "Default constructor Dog called"
				<< std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout	<< "Constructor copy Dog called"
				<< std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout	<< "Destructor Dog called"
				<< std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout	<< "Operator Dog called"
				<< std::endl;
	
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}
