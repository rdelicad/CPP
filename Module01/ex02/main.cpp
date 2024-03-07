/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:22:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 15:15:21 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Address of the string variable: "	<< &string		<< std::endl;
	std::cout << "Address held by stringPTR:      "	<< stringPTR	<< std::endl;
	std::cout << "Address held by stringREF:      "	<< &stringREF	<< std::endl;
	
	std::cout << "value of the string variable:   "	<< string		<< std::endl;
	std::cout << "value pointed to by stringPTR:  "	<< *stringPTR	<< std::endl;
	std::cout << "value pointed to by stringREF:  "	<< stringREF	<< std::endl;

	return 0;
}
