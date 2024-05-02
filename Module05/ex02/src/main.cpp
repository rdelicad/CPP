/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/02 20:01:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include <ctime>

//#********************************************************#
//#                   Shrubbery Form                       #
//#********************************************************#

void shrubberyForm()
{
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat signed -------\033[0m" << std::endl;
	Bureaucrat pepe("pepe", 1);
	ShrubberyCreationForm target("arbol");
	pepe.signForm(target);
	target.getSigned();
	std::cout << target << std::endl;
	ShrubberyCreationForm copy(target);
	copy = target;
	std::cout << copy << std::endl;
	target.execute(pepe);
	std::cout << std::endl;
	std::cout << "\033[1;34m------- Bureaucrat unsigned -------\033[0m" << std::endl;
	Bureaucrat jose("jose", 150);
	jose.signForm(target);
}

void robotoForm()
{
	std::srand(std::time(0));
	Bureaucrat jose("jose", 1);
	RobotoMyRequestForm a("target");
	jose.signForm(a);
	a.getSigned();
	a.execute(jose);
}


int main()
{
	std::cout	<< std::endl
				<< "\033[1;35m"
				<< "#********************************************************#"
				<< std::endl
				<< "#                   Shrubbery Creation Form              #"
				<< std::endl
				<< "#********************************************************#"
				<< "\033[0m"
				<< std::endl;
	shrubberyForm();
	
	std::cout	<< std::endl
				<< "\033[1;35m"
				<< "#********************************************************#"
				<< std::endl
				<< "#                   Roboto Form                          #"
				<< std::endl
				<< "#********************************************************#"
				<< "\033[0m"
				<< std::endl;
	robotoForm();

	return 0;
}