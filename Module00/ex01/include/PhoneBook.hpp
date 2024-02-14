/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/14 13:46:31 by rdelicad         ###   ########.fr       */
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
		Contact PersonContact[MAX_CONTACTS];
	public:
		PhoneBook();
		~PhoneBook();
		Contact getContact(int index);
		void setContact(Contact contact, int index);
		
};

#endif
