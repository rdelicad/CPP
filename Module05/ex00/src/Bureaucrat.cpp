/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:10 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/20 12:19:47 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: _name(name), _grade(grade)
{
	std::cout << "\033[2;33mConstructor [Bureaucrat]\033[0m" << std::endl;
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
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
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other.getGrade();
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

void Bureaucrat::incrementGrade(int value)
{
	if (_grade + value > 150)
		throw GradeTooHighException();
	_grade += value;
}

void Bureaucrat::decrementGrade(int value)
{
	if (_grade - value < 1)
		throw GradeTooLowException();
	_grade -= value;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat Grade " << obj.getGrade();
	return os;
}