/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:44:04 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 19:55:58 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	a("Jose");
	/* ClapTrap	b("pepe");
	ClapTrap	c(a);
	ScavTrap	d(a);
	c = a;
	d = a; */
	
	std::cout << "----- ScavTrap -----" << std::endl;
	a.attack("Jose");
	a.beRepaired(100);
	a.takeDamage(100);
	a.guardGate();
	/* std::cout << "----- ClapTrap -----" << std::endl;
	b.attack("Pepe");
	b.beRepaired(100);
	b.takeDamage(100); */
	
	return 0;
}