/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/19 18:14:40 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

// includes
#include "Contact.hpp"

// Clases
class PhoneBook
{
	private:
	Contact	 PersonContact[MAX_CONTACTS];
	public:
		PhoneBook();
		~PhoneBook();
		void	addAContact(Contact *contact, int index);
		void	listContact();
		void	getContact();
};

#endif
