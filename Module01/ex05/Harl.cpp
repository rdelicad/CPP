/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:02:31 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 14:46:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}
Harl::~Harl( void ) {}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon "
			<< "for my 7XL-double-cheese-"
			<< "triple-pickle-special "
			<< "ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra "
			<< "bacon costs more money. "
			<< "You didn’t put enough bacon "
			<< "in my burger! If you did, I "
			<< "wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some "
			<< "extra bacon for free. I’ve been coming "
			<< "for years whereas you started working "
			<< "here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want"
			<< "to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	void	( Harl::*debugFunc )( void )	= &Harl::debug;
	void	( Harl::*infoFunc )( void )		= &Harl::info;
	void	( Harl::*warningFunc )( void )	= &Harl::warning;
	void	( Harl::*errorFunc )( void )	= &Harl::error;

	switch(ft_stoi(level))
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