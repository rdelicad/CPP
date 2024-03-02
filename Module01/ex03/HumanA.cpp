/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:24:14 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/02 10:58:24 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon )
	:
	_name(name),
	_weapon(weapon)
{}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void )
{
	std::cout	<< _name
				<< " attacks with their "
				<< _weapon.getType()
				<< std::endl;	
}
