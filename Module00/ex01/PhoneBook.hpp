/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/13 17:20:56 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// includes
#include "Contact.hpp"

// Clases
class PhoneBook
{
	private:
		Contact PersonContact[8];
	public:
		PhoneBook();
		~PhoneBook();
		Contact getContact(int index);
		void setContact(Contact contact, int index);
		
};

#endif
