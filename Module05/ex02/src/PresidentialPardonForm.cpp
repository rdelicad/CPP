/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:00:00 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 14:35:41 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "\033[2;34m[PresidentialPardonForm] Constructor default\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm(target, 25, 5)
{
	std::cout << "\033[2;34m[PresidentialPardonForm] Constructor arguments\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[2;34m[PresidentialPardonForm] Destructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
: AForm(copy)
{
	std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "[PresidentialPardonForm] Operator called" << std::endl;
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned() == false)
			throw AForm::SignedException();
		else if (this->getExecute() < executor.getGrade())
			throw AForm::ExecuteException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return false;
	}

	std::cout	<< "\033[1;35m"
				<< getName()
				<< " has been pardoned by Zaphod Beeblebrox."
				<< "\033[0m" << std::endl;
	
	return true;
}