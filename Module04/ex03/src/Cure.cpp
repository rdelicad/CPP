/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:44:42 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 07:55:55 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

Cure::Cure() : AMateria("cure")
{
	std::cout	<< "[Cure] Default constructor called"
				<< std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout	<< "[Cure] Copy constructor called"
				<< std::endl;
}

Cure::~Cure()
{
	std::cout	<< "[Cure] Destructor called"
				<< std::endl;
}

Cure &Cure::operator = (const Cure &copy)
{
	std::cout	<< "[Cure] Assignation operator called"
				<< std::endl;
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Cure *Cure::clone() const
{
	std::cout	<< "[Cure] Clone called"
				<< std::endl;
	return (new Cure(*this));
}

std::string const &Cure::getType() const
{
	return this->_type;	
}

void Cure::use(ICharacter &target)
{
	std::cout	<< "[Cure] * shoots an cure bolt at " << target.getName()
				<< " *"
				<< std::endl;
}