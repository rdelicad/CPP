/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:12:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 21:11:22 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( std::string );
		FragTrap( const FragTrap & );
		~FragTrap();
		
		FragTrap &operator = ( const FragTrap & );

		void	attack( const std::string & );
		void	highFivesGuys();
};

#endif