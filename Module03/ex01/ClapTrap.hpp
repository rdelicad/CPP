/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:30:11 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/18 18:56:12 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hit;
		int _energy;
		int _attack;
	public:  
		ClapTrap( std::string );
		ClapTrap( const ClapTrap & );
		ClapTrap &operator = ( const ClapTrap & );
		~ClapTrap();
		void	attack( const std::string & );
		void	takeDamage( unsigned int );
		void	beRepaired( unsigned int );
};

#endif