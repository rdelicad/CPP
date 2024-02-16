/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:07:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/16 13:07:58 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook constructor" << std::endl;
}
PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook destructor" << std::endl;
}

Contact PhoneBook::getContact(int index)
{
	if (index < 0 || index > 8)
		std::cout << "Introduce un focking numero correcto" << std::endl;
	return PersonContact[index];
}

void PhoneBook::setContact(Contact contact, int index)
{
	if (index >= 0 && index < MAX_CONTACTS)
		PersonContact[index] = contact;
	else
		std::cout << "Index out of range. Please enter a number between 0 and " << MAX_CONTACTS - 1 << "." << std::endl;
}

/* void PhoneBook::listContact()
{
	int	i;

	i = 0;
	while (i <= 8)
	{
		std::cout << PersonContact[i] << std::endl;
		i++;
	}
} */