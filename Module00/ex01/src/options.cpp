/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:16:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/15 20:56:05 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.h"

void	addContact()
{
	t_agenda 	a;
	Contact		agenda;

	//clearConsole();
	std::cout << std::endl;
	std::cout << "add first name" << std::endl;
	std::cin >> a.name;
	if (a.name != "")
		agenda.setFirstName(a.name);

	std::cout << "add last name" << std::endl;
	std::cin >> a.last;
	if (a.last != "")
		agenda.setFirstName(a.last);

	std::cout << "add nick name" << std::endl;
	std::cin >> a.nick;
	if (a.nick != "")
		agenda.setFirstName(a.nick);

	std::cout << "add phone number" << std::endl;
	std::cin >> a.phone;
	if (a.phone != "")
		agenda.setFirstName(a.phone);

	std::cout << "add darkt secret" << std::endl;
	std::cin >> a.secret;
	if (a.secret != "")
		agenda.setFirstName(a.secret);
	
	std::cout << std::endl;
	std::cout << "the contact has been added" << std::endl;
	std::cout << std::endl;
}
