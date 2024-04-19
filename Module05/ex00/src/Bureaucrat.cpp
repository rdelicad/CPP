/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:10 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/19 17:33:48 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}

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