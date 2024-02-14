/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:07:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/14 13:56:41 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

Contact PhoneBook::getContact(int index)
{
	if (index < 0 || index > 8)
		std::cout << "Introduce un focking numero correcto" << std::endl;
	return PersonContact[index];
}