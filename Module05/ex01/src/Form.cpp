/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:30:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/24 20:26:31 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

Form::Form()
:_name("unknown"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{std::cout << "\033[2;33mC[Form] Constructor default\033[0m" << std::endl;}

Form::~Form()
{std::cout << "\033[2;33m[Form] Destructor called\033[0m" << std::endl;}

Form::Form(const std::string name, const int toSign, const int toExecute)
: _name(name), _gradeToSign(toSign), _gradeToExecute(toExecute)
{std::cout << "\033[2;34mC[Form] Constructor default\033[0m" << std::endl;}

Form::Form(const Form &copy)
:	_name(copy.getName()), _gradeToSign(copy.getSign()),
	_isSigned(copy.getSigned()), _gradeToExecute(copy.getExecute())
{
	std::cout << "[Form] Copy constructor called" << std::endl;
}

void Form::incrementGrade()
{
	try
    {
        if (_grade > 1) //Grade?
        	_grade--;
		else
            throw Form::GradeTooHighException();
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Form::decrementGrade()
{
     try
    {
        if (_grade < 150)
        	_grade++;
		else
            throw Form::GradeTooLowException();
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}