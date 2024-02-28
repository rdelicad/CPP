/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:13:06 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/28 18:21:02 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie();
		void	announce( void ) const;
};

Zombie *zombieHorde( int N, std::string name );

#endif
