/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:01:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/02 20:02:30 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotoMyRequestForm::RobotoMyRequestForm()
{
	std::cout << "\033[2;34m[RobotoForm] Constructor default\033[0m" << std::endl;
}

RobotoMyRequestForm::RobotoMyRequestForm(const std::string &target)
: AForm(target, 72, 45)
{
	std::cout << "\033[2;34m[RobotoMyRequestForm] Constructor arguments\033[0m" << std::endl;
}

RobotoMyRequestForm::~RobotoMyRequestForm()
{
	std::cout << "\033[2;34m[RobotoMyRequestForm] Destructor called\033[0m" << std::endl;
}

RobotoMyRequestForm::RobotoMyRequestForm(const RobotoMyRequestForm &copy)
: AForm(copy)
{
	std::cout << "[RobotoMyRequestForm] Copy constructor called" << std::endl;
}
RobotoMyRequestForm &RobotoMyRequestForm::operator=(const RobotoMyRequestForm &other)
{
	std::cout << "[RobotoMyRequestForm] Operator called" << std::endl;
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

bool RobotoMyRequestForm::execute(Bureaucrat const &executor) const
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

	std::cout << "\033[1;35mClack!, Clack!\033[0m" << std::endl;

	int randomNumber = std::rand() % 100;
	if (randomNumber < 50)
		std::cout << "\033[1;32mRobotomization was successfull!\033[0m" << std::endl;
	else
		std::cout << "\033[1;31mRobotomization failed\033[0m" << std::endl;
	
	return true;
}