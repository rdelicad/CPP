/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:45:53 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/20 18:48:03 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGENDA_H
# define AGENDA_H

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <cstdlib>
# include <cstdio>
# include <iostream>

typedef struct s_data
{
	PhoneBook	*agenda;
	Contact		*currentContact;
	std::string	option;
	int			index;
	int			id;

}				t_data;

// main
void		initData(t_data *data);
std::string initMenu();
std::string typeOption(t_data *d);
void		clearConsole(void);

// options
void		addContact(t_data *d);
void		searchContact(t_data *d);

#endif