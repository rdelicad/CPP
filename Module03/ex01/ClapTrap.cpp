/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:30:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/20 21:41:16 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
: _name(name), _hit(100), _energy(50), _attack(20)
{
	std::cout	<< "Default constructor called for "
				<< _name
				<< std::endl;
}
ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout	<< "Copy constructor called for "
				<< _name
				<< std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	std::cout	<< "Operator called for "
				<< _name
				<< std::endl;
	if (this != &other)
		_name = other._name;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "Destructor called for "
				<< _name
				<< std::endl;
}

void ClapTrap::attack( const std::string& target )
{
	
	if (_energy)
	{
		_energy -= 1;
		std::cout	<< "ClapTrap "
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
		std::cout	<< "ClapTrap "
					<< _name	
					<< " no energy!!!"
					<< std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	_hit -= amount;
	if (_hit <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
	}
	else
	{
		std::cout	<< _name
				<< " received "
				<< amount
				<< " hit points -> "
				<< "energy= " << _energy
				<< " hit= " << _hit
				<< std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_energy > 0 && _hit <= 10)
	{
		_energy -= 1;
		_hit += amount;
		if (_hit > 10)
			_hit = 10;
		std::cout	<< _name
					<< " recovered "
					<< amount
					<< " hit points"
					<< " -> energy= " << _energy
					<< " hit= " << _hit
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap "
					<< _name	
					<< " no energy!!!"
					<< std::endl;
}
