#ifndef AGENDA_H
#define AGENDA_H

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

typedef struct s_agenda
{
	std::string	name;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	secret;
}				t_agenda;

// main
std::string	initMenu();
void		typeOption(std::string option);
void		clearConsole();

// options
void		addContact();

#endif