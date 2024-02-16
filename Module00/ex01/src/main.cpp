/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:39:48 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/16 18:34:57 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "agenda.h"

int	main(void)
{
	PhoneBook	*agenda;
	std::string option;

	agenda = new PhoneBook();
	option = "";
	while (option != "EXIT")
	{
		if (option == "")
		{
			option = initMenu();
		}
		option = typeOption(agenda, option);
	}
	return (0);
}

std::string initMenu()
{
	std::string	option;

	clearConsole();
	std::cout << std::endl;
	std::cout << "Welcome to the Contact Book" << std::endl;
	std::cout << std::endl;
	std::cout << "Choose an option" << std::endl;
	std::cout << " - type 'ADD' to enter a contact" << std::endl;
	std::cout << " - type 'SEARCH' to search a contact" << std::endl;
	std::cout << " - type 'EXIT' to exit program" << std::endl;
	std::cin >> option;
	return (option);
}

std::string	typeOption(PhoneBook *agenda, std::string option)
{
	if (option == "ADD" || option == "add")
	{
		clearConsole();
		addContact(agenda);
		option = "";
	}
	else if (option == "SEARCH" || option == "search")
	{
		searchContact(agenda);
		option = "";
	}
	else if (option == "EXIT" || option == "exit")
	{
		exit(0);
	}
	else
		option = "";
	return (option);
}

void	clearConsole(void)
{
	std::system("clear");
}