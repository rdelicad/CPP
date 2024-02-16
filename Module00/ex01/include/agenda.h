#ifndef AGENDA_H
#define AGENDA_H

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

// main
std::string	initMenu();
void		typeOption(std::string option);
void		clearConsole();

// options
void		addContact(PhoneBook *agenda);
std::string	searchContact(PhoneBook *agenda);

#endif