/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:54 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/28 11:40:27 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        ~Bureaucrat();
        Bureaucrat(const std::string &, int);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);
                
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
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &);
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
