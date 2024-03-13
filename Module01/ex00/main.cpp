/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:59:15 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/13 19:19:49 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie stack = Zombie ( "stack" );
	Zombie *heap = newZombie( "heap" );

	stack.announce();
	heap->announce();
	randomChump( "random1" );
	randomChump( "random2" );
	delete ( heap );
	return (0);
}