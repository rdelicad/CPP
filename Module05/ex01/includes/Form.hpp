/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:31:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/24 20:26:24 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Headers.h"

class Bureaucrat;

class Form
{
	private:
		const std::string _name; // nombre del formulario
		bool _isSigned; // indica si esta firmado (true/false)
		const int _gradeToSign; //grado requerido para firmar
		const int _gradeToExecute; // grado para ejecutar
	public:
		Form();
		~Form();
		Form(const std::string, const int, const int);
		Form(const Form &);
		Form &operator=(const Form &);

		std::string getName() const;
		bool getSigned() const;
		int getSign() const;
		int getExecute() const;

		class GradeTooHighException : public std::exception
        {
            public:
            GradeTooHighException(); 
            ~GradeTooHighException() throw() ;
            virtual const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
            GradeTooLowException();
            ~GradeTooLowException() throw();
            virtual const char *what() const throw();
        };

		void incrementGrade();
        void decrementGrade();
		int beSigned(Bureaucrat &);
		/*
		Esta función toma un Bureaucrat como parámetro
		y cambia el estado de isSigned a verdadero 
		si el grado del Bureaucrat es suficientemente alto. 
		Si el grado es demasiado bajo, lanza una excepción 
		Form::GradeTooLowException.
		*/
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif