/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/27 12:41:12 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void validForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat signed Form -------\033[0m" << std::endl;
	Bureaucrat a("Jose", 1);
	Form b("papeles", 2, 1);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a.signForm(b);
	b.getSigned();
}

void inValidForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- invalid signed Form -------\033[0m" << std::endl;
	Bureaucrat a("Jose", 4);
	Form b("papeles", 2, 1);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a.signForm(b);
	b.getSigned();
}

void testExceptions()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test Exceptions -------\033[0m" << std::endl;
	Bureaucrat a("Antonio", 0);
	Bureaucrat b("pepe", 456);
	Form c("contrato", 0, 3);
	Form d("contrato2", 234, 3);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
}

int main()
{
	validForm();
	inValidForm();
	testExceptions();
	/* executeNull();
	executeNormal();
	executeHigh();
	executeLow(); */

	return 0;
}