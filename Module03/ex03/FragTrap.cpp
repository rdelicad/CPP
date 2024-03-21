/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:12:12 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 20:24:59 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout	<< "FragTrap Default constructor called for "
				<< _name
				<< std::endl;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy)
{
	std::cout	<< "FragTrap Copy constructor called for "
				<< _name
				<< std::endl;
	*this = copy;
}


FragTrap &FragTrap::operator=( const FragTrap &other )
{
	ClapTrap::operator=(other);
	std::cout	<< "FragTrap operator = called for "
				<< _name
				<< std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap destructor called for "
				<< _name
				<< std::endl;
}

void	FragTrap::attack( const std::string &target )
{
	if (_energy > 0)
	{
		_energy -= 1;
		std::cout	<< "FragTrap "
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
		std::cout	<< "FragTrap "
					<< _name	
					<< " no energy!!!"
					<< std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout	<< "FragTrap high fives"
				<< std::endl;
}
