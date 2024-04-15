/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:19:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 20:26:14 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

int	main(void)
{
	std::cout << "\n**** Creando la fuente de materia ****\n";
	std::cout << "--------------------------------------------\n";
	IMateriaSource *src = new MateriaSource();

	std::cout << "\n***** Aprendiendo nuevas materias *****\n";
	std::cout << "--------------------------------------------\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	std::cout << "\n***** Creando un nuevo personaje llamado 'me' *****\n";
	std::cout << "--------------------------------------------------------\n";
	ICharacter *me = new Character("me");

	std::cout << "\n**** Probar copia profunda ****\n";
	std::cout << "--------------------------------------------\n";
	//ICharacter *juan = new Character("Juan");
	Character *juan = new Character("Juan");
	Character copyJuan = Character(*juan); // Aquí '*juan' es una referencia a Character
	
	std::cout << "\nProbar copia\n";
	std::cout << "--------------------------------------------\n";
	juan->unequip(0);
	juan->equip(src->createMateria("ice"));

	
	std::cout << "\n**** Creando un objeto temporal de AMateria ****\n";
	std::cout << "-----------------------------------------------------\n";
	AMateria *tmp;

	
	std::cout << "\n**** crear materia 'ice' ****\n";
	std::cout << "--------------------------------------------\n";
	tmp = src->createMateria("ice");
	tmp = src->createMateria("ice");
	std::cout << "\n**** Equipando materia 'ice' ****\n";
	std::cout << "--------------------------------------------\n";
	me->equip(tmp);
	me->equip(tmp);
	std::cout << "\n**** crear materia 'cure' ****\n";
	std::cout << "--------------------------------------------\n";
	tmp = src->createMateria("cure");
	tmp = src->createMateria("cure");
	tmp = src->createMateria("cure");
	std::cout << "\n**** Equipando materia 'cure' ****\n";
	std::cout << "--------------------------------------------\n";
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	
	std::cout << "\n***** Creando un nuevo personaje llamado 'bob' *****\n";
	std::cout << "-------------------------------------------------------\n";
	ICharacter *bob = new Character("bob");

	
	std::cout << "\n***** 'me' ataca a 'bob' con Ice ****\n";
	std::cout << "--------------------------------------------\n";
	me->use(0, *bob);
	me->use(0, *bob);
	std::cout << "\n***** 'me' cura a 'bob' con Cure ****\n";
	std::cout << "--------------------------------------------\n";
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);

	
	std::cout << "\n**** Eliminando los personajes y la fuente de materia ****\n";
	std::cout << "--------------------------------------------------------------\n";
	delete me;
	delete src;
	delete bob;

	return (0);
}