/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:00:43 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/14 14:12:52 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact constructor" << std::endl;
}
Contact::~Contact() {
	std::cout << "Contact destructor" << std::endl;
}
