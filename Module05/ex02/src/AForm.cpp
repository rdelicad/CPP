/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:30:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/28 12:47:37 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

//#********************************************************#
//#                   Canonical orthodox                   #
//#********************************************************#

AForm::AForm(const std::string name, const int toSign, const int toExecute)
: _name(name), _isSigned(false), _gradeToSign(toSign), _gradeToExecute(toExecute) 
{
    std::cout << "\033[2;34m[AForm] Constructor default\033[0m" << std::endl;
    try
    {
        if (toSign < 1)
            throw AForm::GradeTooLowException();
        else if (toSign > 150)
            throw AForm::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

AForm::AForm(const AForm &copy)
:	_name(copy.getName()), _isSigned(false),
    _gradeToSign(copy.getSign()), _gradeToExecute(copy.getExecute())
{
	std::cout << "[AForm] Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "[AForm] Operator called" << std::endl;
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

AForm::~AForm()
{std::cout << "\033[2;34m[AForm] Destructor called\033[0m" << std::endl;}

//#********************************************************#
//#                   nested classes                       #
//#********************************************************#

AForm::GradeTooHighException::GradeTooHighException()
{std::cout << "\033[2;34m[AForm] Constructor [High]\033[0m" << std::endl;}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{std::cout << "\033[2;34m[AForm] Destructor [High]\033[0m" << std::endl;}

AForm::GradeTooLowException::GradeTooLowException()
{std::cout << "\033[2;36m[AForm] Constructor [Low]\033[0m" << std::endl;}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{std::cout << "\033[2;36m[AForm] Destructor [Low]\033[0m" << std::endl;}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "\033[1;31m[AForm] Grade too High!!\033[0m";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "\033[1;31m[AForm] Grade too Low!!\033[0m";
}

//#********************************************************#
//#                     member functions                   #
//#********************************************************#

std::string AForm::getName() const {return _name;}

void AForm::setSigned(bool value)
{
    this->_isSigned = value;
}

bool AForm::getSigned() const
{
    return this->_isSigned;
}

int AForm::getSign() const 
{
    return _gradeToSign;
}

int AForm::getExecute() const {return _gradeToExecute;}

bool AForm::beSigned(Bureaucrat &other)
{
    try
    {
        if (other.getGrade() < this->getSign())
        {
            _isSigned = true;
            return true;
        }
        else  
            throw AForm::GradeTooLowException();
    }
    catch (const AForm::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return false;
}


//#********************************************************#
//#                    insertion operator                  #
//#********************************************************#

std::ostream &operator<<(std::ostream &os, AForm const &obj)
{
	os  << "\033[1;33m"
        << "AForm: "
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