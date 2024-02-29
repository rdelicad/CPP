/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:13:26 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/29 12:42:07 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int	i;
	Zombie *horde;
	
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i] = Zombie( name );
		i++;
	}
	return horde;
}