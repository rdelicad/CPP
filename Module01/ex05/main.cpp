/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:53:37 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/04 14:43:57 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <string>

void	ft_error( int i )
{
	if (i == 1)
	{
		system("clean");
		std::cout << "Error: only one argument is admissible" << std::endl;
		std::cout << "Uso:" << std::endl;
		std::cout << "./harl <argument>" << std::endl;
	}
	else if (i == 2)
		std::cout << "only 1, 2, 3 or 4 is allowed" << std::endl;
}

int	ft_stoi( std::string str )
{
	int	nbr;
	std::string::size_type i;

	nbr = 0;
	i = 0;
	while (i < str.size())
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(2);
		nbr = nbr * 10 + (str[i] - '0');
	}
	return (nbr);
}

int	main(int ac, char **av)
{
	Harl		harl;
	std::string level;

	level = av[1];
	if (ac == 2)
	{
		if (level.size() == 1)
		{
			if (ft_stoi(level) >= 1 && ft_stoi(level) <= 4)
				ft_error(2);
			harl.complain(level);
		}
		else
			ft_error(2);
	}
	else
		ft_error(1);
	return 0;
}