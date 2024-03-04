/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:02:31 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 13:43:00 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}
Harl::~Harl( void ) {}

void	Harl::complain( std::string level )
{
	void	( Harl::*debugFunc )( void )	= &Harl::debug;
	void	( Harl::*infoFunc )( void )		= &Harl::info;
	void	( Harl::*warningFunc )( void )	= &Harl::warning;
	void	( Harl::*errorFunc )( void )	= &Harl::error;

	switch(std::stoi(level))
	{
		case 1:
			(this->*debugFunc)();
			break;
		case 2:
			(this->*infoFunc)();
			break;
		case 3:
			(this->*warningFunc)();
			break;
		case 4:
			(this->*errorFunc)();
			break;
	}
}