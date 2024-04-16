/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:41:35 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 14:51:44 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// creates an instance of Zombie on the stack

void randomChump(std::string name)
{
	Zombie chump(name);
	chump.announce();
}
