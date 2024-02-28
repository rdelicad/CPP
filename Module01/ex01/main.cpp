/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:12:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 18:32:14 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::string	name = "pepito";
	int			N = 5;
	
	Zombie *horde = zombieHorde( N, name );
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}