#ifndef AGENDA_H
# define AGENDA_H

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <cstdlib>
# include <iostream>

typedef struct s_data
{
	PhoneBook	*agenda;
	Contact		*currentContact;
	std::string	option;
	int			index;

}				t_data;

// main
void	initData(t_data *data);
std::string initMenu();
std::string typeOption(t_data *d);
void	clearConsole(void);

// options
void	addContact(t_data *d);
void	searchContact(t_data *d);

#endif