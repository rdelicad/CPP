/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 08:46:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/05 09:36:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <string>

void	ft_error( int i )
{
	if (i == 1)
	{
		system("clear");
		std::cout << "Error: only one argument is admissible" << std::endl;
		std::cout << "< debug >, < info >, < warning > ó < error >" << std::endl;
		std::cout << "Uso:" << std::endl;
		std::cout << "./harlFilter < argument >" << std::endl;
		exit (0);
	}
	else if (i == 2)
	{
		std::cout << "Argument invalid" << std::endl;
		exit (0);
	}
}

int	main(int ac, char **av)
{
	Harl		harl;
	std::string level;
	
	
	if (ac == 2)
	{
		if (av[1] == NULL)
			ft_error(1);
		if (std::string(av[1]) == "debug")
			level = av[1];
		else if (std::string(av[1]) == "info")
			level = av[1];
		else if (std::string(av[1]) == "warning")
			level = av[1];
		else if (std::string(av[1]) == "error")
			level = av[1];
		else
			ft_error(2);
		harl.complain(level);
	}
	else
		ft_error(1);
	return 0;
}
