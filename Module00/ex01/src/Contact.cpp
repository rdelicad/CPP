/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:00:43 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/15 20:06:31 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact constructor" << std::endl;
}
Contact::~Contact() {
	std::cout << "Contact destructor" << std::endl;
}

void	Contact::setFirstName(std::string name) {
	_firstName = name;
}
void	Contact::setLastName(std::string last) {
	_lastName = last;
}
void	Contact::setNickName(std::string nick) {
	_nickName = nick;
}
void	Contact::setPhoneNumber(std::string phone) {
	_phoneNumber = phone;
}
void	Contact::setDarkestSecret(std::string secret) {
	_darkestSecret = secret;
}


