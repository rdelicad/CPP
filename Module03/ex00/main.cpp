/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:12:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/18 20:08:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("Jose");
	ClapTrap	b("Pepe");
	
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	a.attack("Pepe");
	b.takeDamage(9);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.takeDamage(20);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	b.beRepaired(2);
	return 0;
}