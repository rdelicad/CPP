/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:25:09 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 18:46:10 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

Ice::Ice() : AMateria("ice")
{
	std::cout	<< "[Ice] Default constructor called"
				<< std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout	<< "[Ice] Copy constructor called"
				<< std::endl;
}

Ice::~Ice()
{
	std::cout	<< "[Ice] Destructor called"
				<< std::endl;
}

Ice &Ice::operator = (const Ice &copy)
{
	std::cout	<< "[Ice] Assignation operator called"
				<< std::endl;
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Ice *Ice::clone() const
{
	std::cout	<< "[Ice] Clone called"
				<< std::endl;
	return (new Ice(*this));
}

std::string const &Ice::getType() const
{
	return this->_type;	
}

void Ice::use(ICharacter &target)
{
	std::cout	<< "[Ice] * shoots an ice bolt at " << target.getName()
				<< " *"
				<< std::endl;
}
