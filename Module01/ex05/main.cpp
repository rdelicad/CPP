/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:53:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 20:42:58 by rdelicad         ###   ########.fr       */
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
		std::cout << "./harl < argument >" << std::endl;
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
	int			i;
	Harl		harl;
	std::string	level;
	std::string arr[4] = { "debug", "info", "warning", "error" };

	if (av[1] == '\0')
		ft_error(1);
	level = av[1];
	if (ac == 2)
	{
		i = 0;
		while (i < 4)
		{
			if (level.compare(arr[i]) == 0)
			{
				harl.complain(level);
				break;
			}
			i++;
		}
		if (i == 4)
			ft_error(2);
	}
	else
		ft_error(1);
	return 0;
}