/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:28:11 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 19:56:56 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout	<< "ScavTrap Default constructor called for "
				<< _name
				<< std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{
	std::cout	<< "ScavTrap Copy constructor called for "
				<< _name
				<< std::endl;
	*this = copy;
}


ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	ClapTrap::operator=(other);
	std::cout	<< "ScavTrap operator = called for "
				<< _name
				<< std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap destructor called for "
				<< _name
				<< std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	if (_energy > 0)
	{
		_energy -= 1;
		std::cout	<< "ScavTrap "
					<< _name
					<< " attacks "
					<< target
					<< ", causing "
					<< _attack
					<< " points of damage!"
					<< " -> energy= " << _energy
					<< " hit= " << _hit
					<< std::endl;
	}
	else
		std::cout	<< "ScavTrap "
					<< _name	
					<< " no energy!!!"
					<< std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap Mode guard Gate" << std::endl;
}