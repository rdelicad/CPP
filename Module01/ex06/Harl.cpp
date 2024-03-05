/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 08:46:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/05 09:46:28 by rdelicad         ###   ########.fr       */
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
	int levelInt = 0;
    
    if (level == "debug")
        levelInt = 1;
    else if (level == "info")
        levelInt = 2;
    else if (level == "warning")
        levelInt = 3;
    else if (level == "error")
        levelInt = 4;
	else
		ft_error(2);
		
	return levelInt;
	
	/* // tabla hash
    const char* levels[] = {"debug", "info", "warning", "error"};
    const int values[] = {1, 2, 3, 4};
    const int numLevels = sizeof(levels) / sizeof(levels[0]);

    for (int i = 0; i < numLevels; ++i)
    {
        if (level == levels[i])
        {
            return values[i];
        }
    }
    ft_error(2);
    return -1;  */
}

void	Harl::complain( std::string level )
{
	void	( Harl::*debugFunc ) ( void ) = &Harl::debug;
	void	( Harl::*infoFunc ) ( void ) = &Harl::info;
	void	( Harl::*warningFunc ) ( void ) = &Harl::warning;
	void	( Harl::*errorFunc ) ( void ) = &Harl::error;

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
	}
}