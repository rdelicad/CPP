/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:40:04 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 14:51:48 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creates an instance of Zombie on the heap (with new)

Zombie *newZombie( std::string name )
{
	Zombie *zombieInstance = new Zombie(name);
	return zombieInstance;
}
