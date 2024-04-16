/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:13:48 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 18:20:44 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) { _name = ""; }
Zombie::Zombie( std::string name ) { _name = name; }
Zombie::~Zombie( void ) {}

void	Zombie::announce( void ) const
{
	std::cout	<< _name
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}
