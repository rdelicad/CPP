/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:31:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/27 12:35:33 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
		~Form();
		Form(const std::string, const int, const int);
		Form(const Form &);
		Form &operator=(const Form &);
		
		class GradeTooHighException : public std::exception
        {
            public:
            GradeTooHighException(); 
            ~GradeTooHighException() throw();
            virtual const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
            GradeTooLowException();
            ~GradeTooLowException() throw();
            virtual const char *what() const throw();
        };
		
		std::string getName() const;
		void setSigned(bool); //cambiar estado de la firma
		bool getSigned() const; //obtener si esta firmado o no
		int getSign() const; //obtener grado para firmar
		int getExecute() const; //obtener grado ejecucion

		void beSigned(Bureaucrat &);
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