/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:48:42 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 21:30:25 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:  
		std::string	_name;

	public:  
		DiamondTrap( std::string );
		DiamondTrap( const DiamondTrap & );
		~DiamondTrap();
		
		DiamondTrap &operator = ( const DiamondTrap & );

		void	attack ( const std::string & );
		void	whoAmI();
};

#endif