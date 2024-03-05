/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 08:46:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/05 10:12:54 by rdelicad         ###   ########.fr       */
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

static int	stringToInteger(const std::string& level)
{
    const char*	levels[4] = {"debug", "info", "warning", "error"};
    const int	values[4] = {1, 2, 3, 4};
	int			i = 0;

   while (i < 4)
    {
        if (level == levels[i])
        {
            return values[i];
        }
		i++;
    }
    ft_error(2);
    return -1; 
}

void	Harl::complain( std::string level )
{
	void	( Harl::*debugFunc ) ( void )	= &Harl::debug;
	void	( Harl::*infoFunc ) ( void )	= &Harl::info;
	void	( Harl::*warningFunc ) ( void ) = &Harl::warning;
	void	( Harl::*errorFunc ) ( void )	= &Harl::error;

	switch(stringToInteger(level))
	{
		case 1:
			std::cout << "[debug]" << std::endl;
			(this->*debugFunc)();
			// fall through
		case 2:
			std::cout << "[info]" << std::endl;
			(this->*infoFunc)();
			// fall through
		case 3:
			std::cout << "[warning]" << std::endl;
			(this->*warningFunc)();
			// fall through
		case 4:
			std::cout << "[error]" << std::endl;
			(this->*errorFunc)();
			// fall through
			break;
		default:
			ft_error(2);
	}
}