/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/20 11:58:09 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << std::endl;
		std::cout << "\033[1;34m------- Bureaucrat original -------\033[0m" << std::endl;
		Bureaucrat b1("Pepe", 1);
		std::cout << b1 << std::endl;
		//b1.decrementGrade(12);
		b1.incrementGrade(150);
		b1.incrementGrade(24);
		

		std::cout << std::endl;
		std::cout << "\033[1;34m------- test copy -------\033[0m" << std::endl;
		Bureaucrat b2(b1);
		std::cout << b2 << std::endl;
		//b2.decrementGrade(25);
		//b2.incrementGrade(175);
		//b2.incrementGrade(100);
		
		/* Bureaucrat b3 = b1;
		std::cout << b3 << std::endl;
		b3 = b2; */
	}
	catch(Bureaucrat::GradeTooHighException &high)
	{
		std::cerr << high.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &low)
	{
		std::cerr << low.what() << std::endl;
	}
	
	return 0;
}