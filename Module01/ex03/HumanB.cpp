/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:12:39 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/02 11:51:11 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
	:
	_name(name),
	_weapon(NULL)
{}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void )
{
	if (_weapon != NULL || _weapon->getType() != "")
	{
		std::cout	<< _name
					<< " attacks with their "
					<< _weapon->getType()
					<< std::endl;
	}
	else
	{
		std::cout	<< _name
					<< " has no weapon to attack with"
					<< std::endl;
	}
}

void	HumanB::setWeapon( Weapon& weapon )
{
	_weapon = &weapon;
}