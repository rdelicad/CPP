/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:53:46 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 14:34:07 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		
	public:
		Harl( void );
		~Harl( void );
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	complain( std::string level );
};

int		ft_stoi( std::string str) ;
void	ft_error( int i );
#endif 