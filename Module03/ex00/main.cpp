/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:12:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/21 16:35:19 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("Jose");
	ClapTrap	b(a);
	b = a;
	
	a.takeDamage(9);
	a.beRepaired(10);
	a.beRepaired(10);
	a.attack("JOSE");
	a.takeDamage(10);
	std::cout << "--------- OBJ B ---------" << std::endl;
	b.attack("Pepe");
	b.beRepaired(1);
	b.takeDamage(12);
	
	return 0;
}