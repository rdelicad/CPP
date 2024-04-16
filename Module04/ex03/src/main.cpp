/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:19:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/16 19:21:13 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

int	main(void)
{
	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "       Creando la fuente de materia\n";
	std::cout << "--------------------------------------------\n\033[0m";
	IMateriaSource *src = new MateriaSource();

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "        Aprendiendo nuevas materias\n";
	std::cout << "--------------------------------------------\n\033[0m";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "   Creando un nuevo personaje llamado 'me'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	ICharacter *me = new Character("me");
	
	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "  Creando un objeto temporal de AMateria\n";
	std::cout << "--------------------------------------------\n\033[0m";
	AMateria *tmp;

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "            crear materia 'ice'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	tmp = src->createMateria("ice");
	
	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "          Equipando materia 'ice'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	me->equip(tmp);

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "            crear materia 'cure'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	tmp = src->createMateria("cure");

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "          Equipando materia 'cure'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	me->equip(tmp);

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "  Creando un nuevo personaje llamado 'bob'\n";
	std::cout << "--------------------------------------------\n\033[0m";
	ICharacter *bob = new Character("bob");

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "        'me' ataca a 'bob' con Ice\n";
	std::cout << "--------------------------------------------\n\033[0m";
	me->use(0, *bob);

	std::cout << "\n\033[34m--------------------------------------------\n";
	std::cout << "        'me' cura a 'bob' con Cure\n";
	std::cout << "--------------------------------------------\n\033[0m";
	me->use(1, *bob);

	std::cout << "\n\033[34m------------------------------------------------\n";
	std::cout << "Eliminando los personajes y la fuente de materia\n";
	std::cout << "-------------------------------------------------\n\033[0m";
	delete me;
	delete src;
	delete bob;

	std::cout << "\n\033[35m--------------------------------------------\n";
	std::cout << "           Probar copia profunda\n";
	std::cout << "--------------------------------------------\n\033[0m";
	std::cout << "Creando un nuevo personaje 'juan'...\n";
	Character *juan = new Character("juan");

	std::cout << "\033[31mEquipando a 'juan' con una AMateria de tipo Ice...\n\033[0m";
	AMateria *ice = new Ice();
	juan->equip(ice);

	std::cout << "\033[31mCreando una copia de 'juan' llamada 'copyJuan'...\n\033[0m";
	Character copyJuan = Character(*juan);

	std::cout << "\033[31mDes-equipando a 'juan' de la AMateria...\n\033[0m";
	juan->unequip(0);

	std::cout << "\033[31mCreando un nuevo personaje 'target'...\n\033[0m";
	Character *target = new Character("target");

	std::cout << "\033[31m'juan' intenta usar la AMateria...\n\033[0m";
	juan->use(0, *target);

	std::cout << "\033[31m'copyJuan' intenta usar la AMateria...\n\033[0m";
	copyJuan.use(0, *target);

	std::cout	<< "\033[31mSi 'copyJuan' pudo usar la AMateria, "
				<< "entonces se ha realizado una copia profunda.\n\033[0m";

	delete target;
	delete juan;
	delete ice;

	return (0);
}