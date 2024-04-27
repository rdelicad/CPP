/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testBureaucrat.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:21:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/27 12:23:46 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void executeNormal()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test Bureaucrat -------\033[0m" << std::endl;
	Bureaucrat b0("rubén", 23);
	b0.decrementGrade();
	b0.incrementGrade();
	b0.incrementGrade();
	std::cout << b0 << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;34m------- test copy -------\033[0m" << std::endl;
	Bureaucrat b1("Pepe", 1);
	std::cout << b1 << std::endl;
	b1.decrementGrade();
	Bureaucrat b2(b1);
	std::cout << b2 << std::endl;
	
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test asignation -------\033[0m" << std::endl;
	Bureaucrat b3("jose", 5);
	std::cout << b3 << std::endl;
		b3 = b2;
	std::cout << b3 << std::endl;
}

void executeHigh()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat High -------\033[0m" << std::endl;
	Bureaucrat b3("Pepe", 1);
	std::cout << b3 << std::endl;
	b3.incrementGrade();
	std::cout << b3 << std::endl;
}

void executeLow()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat Low -------\033[0m" << std::endl;
	Bureaucrat b4("Antonio", 150);
	std::cout << b4 << std::endl;
	b4.decrementGrade();
	std::cout << b4 << std::endl;
}

void executeNull()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test Bureaucrat -------\033[0m" << std::endl;
	Bureaucrat b0("rubén", 0);
	Bureaucrat b1("rubén", 173);
	std::cout << b0 << std::endl;
	std::cout << b1 << std::endl;
}
