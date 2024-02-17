/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:00:43 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/17 12:26:29 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Contact constructor" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor" << std::endl;
}

void Contact::setUserData(std::string input)
{
	int	i;

	i = 0;
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

void Contact::getUserData()
{
	std::cout << _firstName + "\t|" + _lastName + "\t|" 
			   + _nickName + "\t|"  + _phoneNumber << std::endl;
	// 10 caracteres
	// alienados a la derecha y separados por un (|)
	// truncarse con un .   lsdkjlsdfj.
}
