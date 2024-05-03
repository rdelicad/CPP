/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:31:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/02 19:18:37 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		virtual ~AForm();
		AForm(const std::string, const int, const int);
		AForm(const AForm &);
		AForm &operator=(const AForm &);
		
		std::string getName() const;
		void setSigned(bool);
		bool getSigned() const;
		int getSign() const;
		int getExecute() const;
		bool beSigned(Bureaucrat &);
		virtual bool execute(Bureaucrat const &) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char *what() const throw();
		};
        
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char *what() const throw();
		};
		
		class SignedException : public std::exception
		{
			public:
			virtual const char *what() const throw();
		};

		class ExecuteException : public std::exception
		{
			public:
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &, AForm const &);

#endif