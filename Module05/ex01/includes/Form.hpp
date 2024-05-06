/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:31:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 14:14:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name; 
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		~Form();
		Form(const std::string, const int, const int);
		Form(const Form &);
		Form &operator=(const Form &);
		
		std::string getName() const;
		void setSigned(bool);
		bool getSigned() const;
		int getSign() const;
		int getExecute() const;
		int beSigned(Bureaucrat &);
		
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
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif