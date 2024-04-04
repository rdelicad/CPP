/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:51:33 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/04 15:11:31 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout	<< "[Dog] Default constructor called"
				<< std::endl;
	_type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout	<< "[Dog] Constructor copy called"
				<< std::endl;
	*this = copy;
}

Dog::~Dog() 
{
	delete brain;
	std::cout	<< "[Dog] Destructor called"
				<< std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
	if (this != &other)
	{
		_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout	<< "[Dog] Operator called"
				<< std::endl;
	
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}
