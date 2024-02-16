/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:06:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/16 18:18:57 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact();
		~Contact();
		void setFirstName(std::string name);
		void setLastName(std::string last);
		void setNickName(std::string nick);
		void setPhoneNumber(std::string phone);
		void setDarkestSecret(std::string secret);
		void getUserData();
		/* std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret(); */
};

#endif
