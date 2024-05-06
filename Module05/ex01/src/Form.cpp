/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:30:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 14:14:34 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

//#********************************************************#
//#                   Canonical orthodox                   #
//#********************************************************#

Form::Form(const std::string name, const int toSign, const int toExecute)
: _name(name), _isSigned(false), _gradeToSign(toSign), _gradeToExecute(toExecute) 
{
    std::cout << "\033[2;34m[Form] Constructor default\033[0m" << std::endl;
    try
    {
        if (toSign < 1)
            throw Form::GradeTooLowException();
        else if (toSign > 150)
            throw Form::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

Form::Form(const Form &copy)
:	_name(copy.getName()), _isSigned(false),
    _gradeToSign(copy.getSign()), _gradeToExecute(copy.getExecute())
{
	std::cout << "[Form] Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "[Form] Operator called" << std::endl;
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

Form::~Form()
{std::cout << "\033[2;34m[Form] Destructor called\033[0m" << std::endl;}

//#********************************************************#
//#                   nested classes                       #
//#********************************************************#

Form::GradeTooHighException::GradeTooHighException()
{std::cout << "\033[2;34m[Form] Constructor [High]\033[0m" << std::endl;}

Form::GradeTooHighException::~GradeTooHighException() throw()
{std::cout << "\033[2;34m[Form] Destructor [High]\033[0m" << std::endl;}

Form::GradeTooLowException::GradeTooLowException()
{std::cout << "\033[2;36m[Form] Constructor [Low]\033[0m" << std::endl;}

Form::GradeTooLowException::~GradeTooLowException() throw()
{std::cout << "\033[2;36m[Form] Destructor [Low]\033[0m" << std::endl;}

const char* Form::GradeTooHighException::what() const throw()
{
	return "\033[1;31m[Form] Grade too High!!\033[0m";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "\033[1;31m[Form] Grade too Low!!\033[0m";
}

//#********************************************************#
//#                     member functions                   #
//#********************************************************#

std::string Form::getName() const {return _name;}

void Form::setSigned(bool value)
{
    this->_isSigned = value;
}

int Form::getSign() const 
{
    return _gradeToSign;
}

int Form::getExecute() const {return _gradeToExecute;}

bool Form::getSigned() const
{
    return this->_isSigned;
}

int Form::beSigned(Bureaucrat &other)
{
    try
    {
        if (other.getGrade() < this->getSign())
        {
            _isSigned = true;
            return 1;
        }
        else  
            throw Form::GradeTooLowException();
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
    
}

//#********************************************************#
//#                    insertion operator                  #
//#********************************************************#

std::ostream &operator<<(std::ostream &os, Form const &obj)
{
	os  << "\033[1;33m"
        << "Form: "
        << "\033[1;35m"
        << obj.getName()
        << "\033[1;33m"
        << "; Grade to sign: " 
        << "\033[1;35m"
        << obj.getSign()
        << "\033[1;33m"
        << "; Grade to execute: "
        << "\033[1;35m"
        << obj.getExecute()
        << "; " 
        << (obj.getSigned() ? "\033[1;32mIs signed\033[0m" : "\033[1;31mUnsigned\033[0m")
        << "\033[0m";
	return os;
}