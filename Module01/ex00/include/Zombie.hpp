/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:43:59 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/22 20:24:20 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		Zombie	*newZombie( std::string name );
		void	randomChump( std::string name );
};

#endif