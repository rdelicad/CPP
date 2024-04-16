/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:12:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/29 13:57:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::string	name[5];
	Zombie **horde;
	int			N;
	int			i;
	
	N = 5;
	name[0] = "pepito    ";
	name[1] = "juanito   ";
	name[2] = "pulgarcito";
	name[3] = "menganito ";
	name[4] = "rubencito ";
	horde = new Zombie*[N];
	i = 0;
	while (i < N)
	{
		horde[i] = zombieHorde( N, name[i] );
		i++;
	}
	i = 0;
	while (i < N)
	{
		horde[i]->announce();
		i++;
	}
	i = 0;
	while (i < N)
	{
		delete[] horde[i];
		i++;
	}
	delete[] horde;
}
