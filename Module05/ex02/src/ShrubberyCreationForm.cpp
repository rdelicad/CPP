/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:02:03 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/28 13:11:28 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// formulario de creacion de arbustos

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name)
: AForm(name, 145, 137)
{
	std::cout << "\033[2;34m[ShrubberyCreationForm] Constructor default\033[0m" << std::endl;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &other) const
{
	(void)other;
	std::cout << "nada" << std::endl;
	return true;
}
