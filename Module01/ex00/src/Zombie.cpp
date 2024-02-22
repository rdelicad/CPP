/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:54:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/22 20:26:55 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"

Zombie::Zombie()
{}
Zombie::~Zombie()
{}

void	Zombie::announce( void )
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	Zombie::*newZombie( std::string name )
{
	
}

void	Zombie::randomChump( std::string name )
{
	
}