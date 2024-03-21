/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:44:04 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 21:44:32 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap m("hola");
	/* FragTrap	r("Marcos");	
	ScavTrap	a("Jose");
	ClapTrap	b("pepe");
	
	ClapTrap	c(a);
	ScavTrap	d(a);
	FragTrap	q(r);
	DiamondTrap copy(m);
	c = a;
	d = a;
	q = r;
	copy = m; */
	
	std::cout << "----- DiamondTrap -----" << std::endl;
	/* m.attack("Jose");
	m.beRepaired(100);
	m.takeDamage(100);
	m.highFivesGuys();
	m.guardGate(); */
	m.whoAmI();
	/* std::cout << "----- FragTrap -----" << std::endl;
	r.attack("Jose");
	r.beRepaired(100);
	r.takeDamage(100);
	r.highFivesGuys(); */
	/* std::cout << "----- ScavTrap -----" << std::endl;
	a.attack("Jose");
	a.beRepaired(100);
	a.takeDamage(100);
	a.guardGate(); */
	/* std::cout << "----- ClapTrap -----" << std::endl;
	b.attack("Pepe");
	b.beRepaired(100);
	b.takeDamage(100); */
	
	return 0;
}