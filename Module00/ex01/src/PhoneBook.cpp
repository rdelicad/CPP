/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:07:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/19 18:47:31 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{}
PhoneBook::~PhoneBook()
{}

void PhoneBook::getContact()
{
	int			id;
	std::string input;

	std::cout << std::endl;
	std::cout << "Select the [index] of the contact you wish to view!!" << std::endl;
	std::cin.ignore(10000, '\n');
	while (1)
	{
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		{
			id = input[0] - '0';
			break;
		} else 
		{
			std::cout << "Error: ¡Entrada inválida!" << std::endl;
		}
	}
	PersonContact[id].showContact();
}

void PhoneBook::addAContact(Contact *contact, int index)
{
	if (index >= 0 && index < MAX_CONTACTS)
		PersonContact[index] = *contact;
	else
		std::cout << "Index out of range. Please enter a number between 0 and " << MAX_CONTACTS
			- 1 << "." << std::endl;
}

void	PhoneBook::listContact()
{
	int 		i;

	i = 0;
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8)
	{
		PersonContact[i].getUserData();
		i++;
	}
}
