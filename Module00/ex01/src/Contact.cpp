/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:00:43 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/20 15:43:34 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::setUserData(std::string input, int i)
{
	while (i < 5)
	{
		switch(i)
		{
			case 0:
				_firstName = input;
				break;
			case 1:
				_lastName = input;
				break;
			case 2:
				_nickName = input;
				break;
			case 3:
				_phoneNumber = input;
				break;
			case 4:
				_darkSecret = input;
				break;
		}
		i++;
	}
}

int Contact::count = 0;

void	Contact::getUserData()
{
	std::string firstNameDisplay = _firstName;
    std::string lastNameDisplay = _lastName;
    std::string nickNameDisplay = _nickName;

    if (firstNameDisplay.size() > 10)
        firstNameDisplay = firstNameDisplay.substr(0, 9) + ".";
    if (lastNameDisplay.size() > 10)
        lastNameDisplay = lastNameDisplay.substr(0, 9) + ".";
    if (nickNameDisplay.size() > 10)
        nickNameDisplay = nickNameDisplay.substr(0, 9) + ".";
		
    while (firstNameDisplay.size() < 10)
        firstNameDisplay =  " " + firstNameDisplay;
    while (lastNameDisplay.size() < 10)
        lastNameDisplay = " " + lastNameDisplay;
    while (nickNameDisplay.size() < 10)
        nickNameDisplay = " " + nickNameDisplay;

	std::cout <<"|         " + std::to_string(count) + "|" + firstNameDisplay + "|" 
        + lastNameDisplay + "|"  +  nickNameDisplay + "|" << std::endl;
    count = (count + 1) % 8;
}

void	Contact::showContact()
{
	std::cout << "firtName : " + _firstName << std::endl;
	std::cout << "lastName : " + _lastName << std::endl;
	std::cout << "nickName : " + _nickName << std::endl;
	std::cout << "numberPhone : " + _phoneNumber << std::endl;
	std::cout << "darkSecret : " + _darkSecret << std::endl;
}
