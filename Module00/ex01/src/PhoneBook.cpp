/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:07:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/17 12:18:19 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor" << std::endl;
}
PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor" << std::endl;
}

Contact PhoneBook::getContact(int index)
{
	if (index < 0 || index > 8)
		std::cout << "Introduce un focking numero correcto" << std::endl;
	return (PersonContact[index]);
}

void PhoneBook::setContact(Contact *contact, int index)
{
	if (index >= 0 && index < MAX_CONTACTS)
		PersonContact[index] = *contact;
	else
		std::cout << "Index out of range. Please enter a number between 0 and " << MAX_CONTACTS
			- 1 << "." << std::endl;
}

void PhoneBook::listContact()
{
	int i;
	std::string continueOption;
	i = 0;
	std::cout << " FirstName|  LastName|  NickName|     Phone|" << std::endl;
	while (i < 8)
	{
		PersonContact[i].getUserData();
		i++;
	}
	std::cout << std::endl;
	std::cout << "Press [Enter] to continue!!" << std::endl;
	std::cin.ignore(10000, '\n');
	std::cin.get();
}