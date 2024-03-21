/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:48:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 21:28:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) 
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	std::cout	<< "DiamondTrap Default constructor called for "
				<< _name
				<< std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) 
: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout	<< "DiamondTrap Copy constructor called for "
				<< _name
				<< std::endl;
}


DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
{
	ClapTrap::operator=(other);
	_name = other._name;
	std::cout	<< "DiamondTrap operator = called for "
				<< _name
				<< std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap destructor called for "
				<< _name
				<< std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI()
{
	std::cout	<< "DiamondTrap name is "
				<< _name
				<< std::endl;
	std::cout	<< "ClapTrap name is "
				<< ClapTrap::_name
				<< std::endl;
}
