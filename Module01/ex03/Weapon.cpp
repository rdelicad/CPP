/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:11:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/02 11:15:51 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
	:
	_type(type)
{}
Weapon::~Weapon( void ) {}

const std::string& Weapon::getType( void )
{
	return (_type);
}

void	Weapon::setType( std::string newType )
{
	_type = newType;
}