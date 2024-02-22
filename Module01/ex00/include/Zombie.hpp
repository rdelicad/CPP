/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:43:59 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/22 20:03:44 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "Zombie.h"

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		
	
};

#endif