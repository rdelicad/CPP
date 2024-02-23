/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:40:04 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/23 09:49:41 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

//creates an instance of Zombie on the heap (with new)

Zombie *newZombie( std::string name )
{
	Zombie *zombieInstance = new Zombie(name);
	return zombieInstance;
}
