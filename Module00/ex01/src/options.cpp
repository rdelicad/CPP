/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:16:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/16 13:54:16 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.h"


void	addContact(PhoneBook *agenda)
{
	int		i;
	Contact	currentContact;
	std::string input;
	std::string array[5] = {"name", "last", "nick", "phone", "secret"};

	i = 0;
	do
	{
		std::cout << "add first " << array[i] << std::endl;
		std::cin >> input;
		switch (i)
		{
		case 0:
			currentContact.setFirstName(input);
			break ;
		case 1:
			currentContact.setLastName(input);
			break ;
		case 2:
			currentContact.setNickName(input);
			break ;
		case 3:
			currentContact.setPhoneNumber(input);
			break ;
		case 4:
			currentContact.setDarkestSecret(input);
			break ;
		}
		i++;
	} while (i < 5 && input != "");
	std::cout << std::endl;
	std::cout << "the contact has been added" << std::endl;
	std::cout << std::endl;
	agenda->setContact(currentContact, 0);
}

/* std::string	searchContact(PhoneBook *agenda)
{
	std::string	option;
	
	agenda.listContact();
	return option;
} */
