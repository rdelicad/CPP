/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/28 13:12:09 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

//#********************************************************#
//#                   Test AForm                            #
//#********************************************************#

/* void validForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat signed AForm -------\033[0m" << std::endl;
	Bureaucrat a("Jose", 1);
	AForm b("papeles", 2, 1);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a.signForm(b);
	b.getSigned();
	std::cout << b << std::endl;
}

void inValidForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- invalid signed AForm -------\033[0m" << std::endl;
	Bureaucrat a("Jose", 4);
	AForm b("papeles", 2, 1);
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
	AForm c("contrato", 0, 3);
	AForm d("contrato2", 234, 3);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
}

void testCopyOperator()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test Copy -------\033[0m" << std::endl;
	Bureaucrat pepe("pepe", 1);
	AForm a("Alguien", 3, 2);
	AForm b(a);
	pepe.signForm(a);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;34m------- test Operator -------\033[0m" << std::endl;
	b = a;
	std::cout << b << std::endl;
} */

//#********************************************************#
//#                   Test Bureaucrat                      #
//#********************************************************#

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


int main()
{
	std::cout	<< std::endl
				<< "\033[1;35m"
				<< "#********************************************************#"
				<< std::endl
				<< "#                   Test Form                            #"
				<< std::endl
				<< "#********************************************************#"
				<< "\033[0m"
				<< std::endl;
	ShrubberyCreationForm casa("casa");
	/* validForm();
	inValidForm();
	testExceptions();
	testCopyOperator(); */
	

	/* std::cout	<< std::endl
				<< "\033[1;35m"
				<< "#********************************************************#"
				<< std::endl
				<< "#                   Test Bureaucrat                      #"
				<< std::endl
				<< "#********************************************************#"
				<< "\033[0m"
				<< std::endl;
	executeNormal();
	executeNull();
	executeHigh();
	executeLow(); */

	return 0;
}