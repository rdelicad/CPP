/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:12:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/20 21:40:20 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("Jose");
	
	a.takeDamage(9);
	//a.beRepaired(10);
	a.attack("JOSE");
	a.takeDamage(1);
	
	return 0;
}