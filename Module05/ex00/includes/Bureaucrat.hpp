/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:54 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/20 11:53:08 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat &operator=(const Bureaucrat &);

    public:
        ~Bureaucrat();
        Bureaucrat(const std::string &, int);
        Bureaucrat(const Bureaucrat &);
                
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
        
        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int);
        void decrementGrade(int);
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
