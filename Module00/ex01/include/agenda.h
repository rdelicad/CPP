#ifndef AGENDA_H
# define AGENDA_H

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <cstdlib>
# include <iostream>

// main
std::string initMenu();
std::string typeOption(PhoneBook *agenda, std::string option);
void	clearConsole(void);

// options
void	addContact(PhoneBook *agenda);
void	searchContact(PhoneBook *agenda);

#endif