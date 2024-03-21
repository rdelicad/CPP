/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:30:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 20:09:40 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
: _name(name), _hit(100), _energy(50), _attack(20)
{
	std::cout	<< "ClapTrap Default constructor called for "
				<< _name
				<< std::endl;
}
ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout	<< "ClapTrap Copy constructor called for "
				<< _name
				<< std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_attack = other._attack;
	}
	std::cout	<< "ClapTrap Operator called for "
				<< _name
				<< std::endl;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap Destructor called for "
				<< _name
				<< std::endl;
}

void ClapTrap::attack( const std::string& target )
{
	if (_energy > 0)
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
	if ((unsigned)_hit > amount)
	{
		_hit -= amount;
		std::cout	<< "ClapTrap "
					<< _name
					<< " received "
					<< amount
					<< " hit points -> "
					<< "energy= " << _energy
					<< " hit= " << _hit
					<< std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap "
					<< _name 
					<< " is dead" 
					<< std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_energy > 0 && _hit <= 100)
	{
		_energy -= 1;
		_hit += amount;
		if (_hit > 10)
			_hit = 10;
		std::cout	<< "ClapTrap "
					<< _name
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
