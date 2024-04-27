/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:30:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/27 12:50:35 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

Form::~Form()
{std::cout << "\033[2;34m[Form] Destructor called\033[0m" << std::endl;}

Form::Form(const std::string name, const int toSign, const int toExecute)
: _name(name), _gradeToSign(toSign), _gradeToExecute(toExecute)
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

Form::GradeTooHighException::GradeTooHighException()
{std::cout << "\033[2;34m[Form] Constructor [High]\033[0m" << std::endl;}

Form::GradeTooHighException::~GradeTooHighException() throw()
{std::cout << "\033[2;34m[Form] Destructor [High]\033[0m" << std::endl;}

Form::GradeTooLowException::GradeTooLowException()
{std::cout << "\033[2;36m[Form] Constructor [Low]\033[0m" << std::endl;}

Form::GradeTooLowException::~GradeTooLowException() throw()
{std::cout << "\033[2;36m[Form] Destructor [Low]\033[0m" << std::endl;}

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

std::string Form::getName() const {return _name;}

int Form::getSign() const 
{
    return _gradeToSign;
}

int Form::getExecute() const {return _gradeToExecute;}

bool Form::getSigned() const
{
    if (_isSigned == true)
    {
        std::cout   << "\033[0;32m"
                    << getName()
                    << " is signed" 
                    << "\033[0m" << std::endl;
        return true;   
    }
    else  
    {
        std::cout   << "\033[0;31m"
                    << getName()
                    << " unsigned" 
                    << "\033[0m" << std::endl;
        return false;
    }
}

void Form::setSigned(bool value)
{
    this->_isSigned = value;
}

void Form::beSigned(Bureaucrat &other)
{
    try
    {
        if (other.getGrade() < this->getSign())
            _isSigned = true;
        else  
            throw Form::GradeTooLowException();
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "\033[0;31m[Form] Grade too High!!\033[0m";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "\033[0;31m[Form] Grade too Low!!\033[0m";
}

std::ostream &operator<<(std::ostream &os, Form const &obj)
{
	os  << "\033[1;37m"
        << obj.getName() 
        << ", Form Grade " 
        << obj.getSign()
        << "\033[0m";
	return os;
}