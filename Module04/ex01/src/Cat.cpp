/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:07:53 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/02 16:58:23 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout	<< "[Cat] Default constructor called"
				<< std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout	<< "[Cat] Constructor copy called"
				<< std::endl;
	*this = copy;
}

Cat::~Cat() 
{
	std::cout	<< "[Cat] Destructor called"
				<< std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout	<< "[Cat] Operator called"
				<< std::endl;
	
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}
