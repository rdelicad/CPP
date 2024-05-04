/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/04 18:51:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <ctime>

//#********************************************************#
//#                   Shrubbery Form                       #
//#********************************************************#

void shrubberyForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat signed -------\033[0m" << std::endl;
	Bureaucrat pepe("pepe", 1);
	ShrubberyCreationForm target("arbol");
	pepe.signForm(target);
	target.getSigned();
	std::cout << target << std::endl;
	ShrubberyCreationForm copy(target);
	copy = target;
	std::cout << copy << std::endl;
	pepe.executeForm(target);
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat unsigned -------\033[0m" << std::endl;
	Bureaucrat jose("jose", 150);
	ShrubberyCreationForm a("casa");
	jose.signForm(a);
	jose.executeForm(a);
}

void robotoForm()
{
	std::srand(std::time(0));
	Bureaucrat jose("jose", 1);
	RobotoMyRequestForm a("target");
	jose.signForm(a);
	a.getSigned();
	jose.executeForm(a);
}

void presidentialForm()
{
	Bureaucrat jose("jose", 1);
	PresidentialPardonForm a("target");
	jose.signForm(a);
	a.getSigned();
	jose.executeForm(a);
}

void internForm()
{
	Intern intern;
    Bureaucrat jose("Jose", 1);

    AForm *form1 = intern.makeForm("Shrubbery creation", "home");
    if (form1) 
	{
        jose.signForm(*form1);
        jose.executeForm(*form1);
        delete form1;
    }

    AForm *form2 = intern.makeForm("Robotomy Request", "robot");
    if (form2) 
	{
        jose.signForm(*form2);
        jose.executeForm(*form2);
        delete form2;
    }

    AForm *form3 = intern.makeForm("Presidential Pardon", "president");
    if (form3) 
	{
        jose.signForm(*form3);
        jose.executeForm(*form3);
        delete form3;
    }

    AForm *form4 = intern.makeForm("Invalid Form", "nowhere");
    if (form4) 
	{
        jose.signForm(*form4);
        jose.executeForm(*form4);
        delete form4;
    }

}


int main()
{
	std::cout	<< std::endl
				<< "\033[1;35m"
				<< "#********************************************************#"
				<< std::endl
				<< "#                   Intern Form                          #"
				<< std::endl
				<< "#********************************************************#"
				<< "\033[0m"
				<< std::endl;
	internForm();

	return 0;
}