/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/13 17:54:56 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void setFirstName(std::string name);
		void setLastName(std::string last);
		void setNickName(std::string nick);
		void setPhoneNumber(std::string phone);
		void setDarkestSecret(std::string secret);
};

#endif
