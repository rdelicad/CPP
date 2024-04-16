/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:02:31 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 20:46:53 by rdelicad         ###   ########.fr       */
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
	int		i = 0;
	void	( Harl::*func[4] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string arr[4] = { "debug", "info", "warning", "error" };

	while (i < 4)
	{
		if (level.compare(arr[i]) == 0)
		{
			(this->*func[i])();
			break;
		}
		i++;
	}
}