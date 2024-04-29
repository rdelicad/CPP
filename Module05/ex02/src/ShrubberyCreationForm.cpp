/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:02:03 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/29 18:50:01 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// formulario de creacion de arbustos

#include "../includes/ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm(target, 145, 137)
{
	std::cout << "\033[2;34m[ShrubberyCreationForm] Constructor default\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[2;34m[ShrubberyCreationForm] Destructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
: AForm(copy)
{
	std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "[ShrubberyCreationForm] Operator called" << std::endl;
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	//verificar si el formulario esta firmado y verificar si el burocrata tiene tiene nivel para ejecutar
	try
	{
		if (!this->getSigned() || (this->getExecute() > executor.getGrade()))
			throw AForm::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return false;
	}
	
	
	//crear un objeto de archivo de salida con el nombre del archivo basado en el target del formulario
	std::ofstream archivo(this->getName() + "_shrubbery");
	if (!archivo)
	{
		std::cerr << "No se pudo abrir el archivo" << std::endl;
		return false;
	}
	
	//escribir en el archivo
	archivo << "    ^    " << std::endl;
	archivo << "   ^^^   " << std::endl;
	archivo << "  ^^^^^  " << std::endl;
	archivo << " ^^^^^^^ " << std::endl;
	archivo << "^^^^^^^^^" << std::endl;
	archivo << "    |    " << std::endl;
	
	//cerrar el archivo
	archivo.close();
	
	return true;
}
