/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:43:59 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 17:46:35 by rdelicad         ###   ########.fr       */
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
		
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie  *newZombie( std::string name );
void	randomChump( std::string name );

#endif