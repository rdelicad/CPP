/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:55:13 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/03 16:02:05 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:  
		AForm *makeShrubberyCreationForm(const std::string &);
		AForm *makeRobotomyRequestForm(const std::string &);
		AForm *makePresidentialPardonForm(const std::string &);
	public:  
		Intern();
		~Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		AForm *makeForm(const std::string &, const std::string &);	
};

#endif