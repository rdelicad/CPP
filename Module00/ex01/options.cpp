/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:16:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/20 17:19:11 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.h"

void	addContact(t_data *d)
{
	int		i;

	std::string input;
	std::string array[5] = {"first name", "last name", "nick name", "phone number", "dark secret"};
	i = 0;
	do
	{
		if (!std::getline(std::cin, input))
            return;
		std::cout << "add " << array[i] << std::endl;
		std::cin >> input;
		d->currentContact->setUserData(input, i);
		i++;
	} while (i < 5 && input != "");
	if (d->index == 8)
		d->index = 0;
	d->agenda->addAContact(d->currentContact, d->index);
	d->index++;
	if (!std::cin.eof())
	{
		std::cout << std::endl;
		std::cout << "the contact has been added" << std::endl;
		std::cout << std::endl;
	}
}


void	searchContact(t_data *d)
{
	clearConsole();
	d->agenda->listContact();
}
