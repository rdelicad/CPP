/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:01:46 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 13:59:52 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

typedef AForm *(Intern::*FormCreator)(const std::string &);

Intern::Intern()
{
	std::cout << "\033[2;34m[Intern] Constructor default\033[0m" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\033[2;34m[Intern] Destructor called\033[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	std::cout << "[Intern] Copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "[Intern] Operator called" << std::endl;
	return *this;
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target)
{
	return new RobotoMyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

//sin alias
//AForm *(Intern::*formCreator[3])(const std::string &);
AForm *Intern::makeForm(const std::string &nameForm, const std::string &targetForm)
{
	std::string formNames[3];
	formNames[0] = "Shrubbery creation";
	formNames[1] = "Robotomy Request";
	formNames[2] = "Presidential Pardon";
	FormCreator formCreator[3];
	formCreator[0] = &Intern::makeShrubberyCreationForm;
	formCreator[1] = &Intern::makeRobotomyRequestForm;
	formCreator[2] = &Intern::makePresidentialPardonForm;
	
	int i = 0;
	while (i < 3)
	{
		if (formNames[i] == nameForm)
		{
			std::cout	<< "\033[1;34mIntern creates "
						<< nameForm
						<< "\033[0m"
						<< std::endl;
			return (this->*formCreator[i])(targetForm);
		}
		i++;
	}
	
	std::cout << "\033[1;31mInvalid form name\033[0m" << std::endl;
	return NULL;
}