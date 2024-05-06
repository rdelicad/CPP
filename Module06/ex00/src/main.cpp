/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:09 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/06 19:22:54 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av) 
{
	if (ac != 2)
	{
		std::cout << "Introduce un argumento" << std::endl;
		return 0;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}