/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:19:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 19:58:56 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string );
		ScavTrap( const ScavTrap & );
		~ScavTrap();
		
		ScavTrap &operator = ( const ScavTrap & );

		void	attack( const std::string & );
		void	guardGate();
};

#endif