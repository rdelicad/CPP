/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:10 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/24 16:25:07 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: _name(name)
{
	std::cout << "\033[2;33mConstructor [Bureaucrat]\033[0m" << std::endl;
	try 
	{
		if (grade < 1)
			throw(Bureaucrat::GradeTooLowException());
		else if (grade > 150)
			throw(Bureaucrat::GradeTooHighException());
		else
			_grade = grade;
	}
	catch (std::exception &e) 
	{	
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{std::cout << "\033[2;33mDestructor [Bureaucrat]\033[0m" << std::endl;}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{std::cout << "\033[2;34mConstructor [High]\033[0m" << std::endl;}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{std::cout << "\033[2;34mDestructor [High]\033[0m" << std::endl;}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{std::cout << "\033[2;36mConstructor [Low]\033[0m" << std::endl;}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{std::cout << "\033[2;36mDestructor [Low]\033[0m" << std::endl;}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
: _name(copy.getName()), _grade(copy.getGrade()) 
{std::cout << "\033[2;37mCopy constructor\033[0m" << std::endl;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "\033[2;37mOperator asignation\033[0m" << std::endl;
	if (_grade != other._grade)
		_grade = other._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	try
    {
        if (_grade > 1)
        	_grade--;
		else
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
     try
    {
        if (_grade < 150)
        	_grade++;
		else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "\033[0;31mGrade too High!!\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "\033[0;31mGrade too Low!!\033[0m";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat Grade " << obj.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &other)
{
	if (other.beSigned(*this))
		std::cout	<< "\033[1;32m[" << getName() << "]"
					<< " signed " 
					<< "[" << other.getName() << "]\033[0m"
					<< std::endl;
	else
		std::cout	<< "\033[1;31m[" << getName() << "]"
					<< " couldn't sign "
					<< "[" << other.getName() << "]"
					<< " beacuse ...\033[1;31m " << std::endl;
} 