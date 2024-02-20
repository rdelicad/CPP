/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:39:48 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/20 17:27:19 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "agenda.h"

int	main(void)
{
	t_data	data;

	initData(&data);
	data.option = "";
	while (data.option != "EXIT")
	{
		if (data.option == "")
		{
			data.option = initMenu();
		}
		data.option = typeOption(&data);
		if (std::cin.eof())
			break;
	}
	delete data.agenda;
	delete data.currentContact;
	data.agenda = 0;
	return (0);
}

std::string initMenu()
{
	std::string	option;

	clearConsole();
	std::cout << "Welcome to the Contact Book" << std::endl;
	std::cout << std::endl;
	std::cout << "Choose an option" << std::endl;
	std::cout << " - type 'ADD' to enter a contact" << std::endl;
	std::cout << " - type 'SEARCH' to search a contact" << std::endl;
	std::cout << " - type 'EXIT' to exit program" << std::endl;
	std::cin >> option;
	return (option);
}

std::string	typeOption(t_data *d)
{
	if (d->option == "ADD" || d->option == "add")
	{
		clearConsole();
		addContact(d);
		d->option = "";
	}
	else if (d->option == "SEARCH" || d->option == "search")
	{
		searchContact(d);
		d->agenda->getContact();
		std::cout << std::endl;
		if (!std::cin.eof())
			std::cout << "Press [Enter] to continue!!" << std::endl;
		std::cin.get();
		d->option = "";
	}
	else if (d->option == "EXIT" || d->option == "exit")
	{
		d->option = "EXIT";
	}
	else
	d->option = "";
	return (d->option);
}

void	clearConsole(void)
{
	std::system("clear");
}

void	initData(t_data *data)
{
	data->agenda = new PhoneBook();
	data->currentContact = new Contact();
	data->option = "";
	data->index = 0;
}