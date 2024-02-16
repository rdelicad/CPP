/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:00:43 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/16 19:47:13 by rdelicad         ###   ########.fr       */
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

void Contact::setFirstName(std::string name)
{
	_firstName = name;
}
void Contact::setLastName(std::string last)
{
	_lastName = last;
}
void Contact::setNickName(std::string nick)
{
	_nickName = nick;
}
void Contact::setPhoneNumber(std::string phone)
{
	_phoneNumber = phone;
}
void Contact::setDarkestSecret(std::string secret)
{
	_darkestSecret = secret;
}
void Contact::getUserData()
{
	std::cout << _firstName + "\t|" + _lastName + "\t|" 
			   + _nickName + "\t|"  + _phoneNumber << std::endl;
}
/* std::string Contact::getLastName() {
	return (_lastName);
}
std::string Contact::getNickName() {
	return (_nickName);
}
std::string Contact::getPhoneNumber() {
	return (_phoneNumber);
}
std::string Contact::getDarkestSecret() {
	return (_darkestSecret);
}
 */
