/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:10:09 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 16:02:43 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

AMateria::AMateria()
{
	this->_type = "AMateria";
	std::cout	<< "[AMateria] Default constructor called"
				<< std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout	<< "[AMateria] Constructor with type called"
				<< std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout	<< "[AMateria] Constructor copy called"
				<< std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout	<< "[AMateria] Destructor called"
				<< std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		_type = other._type;
	std::cout	<< "[AMateria] Operator called"
				<< std::endl;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

virtual AMateria *clone() const

void AMateria::use(ICharacter &target)
{
	std::cout	<< "[AMateria] * shoots an ice bolt at " << target.getName()
				<< " *"
				<< std::endl;
}
