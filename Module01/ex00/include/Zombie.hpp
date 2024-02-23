/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:43:59 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/23 09:53:53 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;
		Zombie( void );
		
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie  *newZombie( std::string name );
void	randomChump( std::string name );

#endif