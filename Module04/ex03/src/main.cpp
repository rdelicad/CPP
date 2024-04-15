/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:19:56 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 15:41:16 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"


int main()
{
    // Crear la fuente de materia
    std::cout << "\n******* Creando la fuente de materia *****\n";
    IMateriaSource *src = new MateriaSource();
   
    

    // Aprender nuevas materias
    std::cout << "\n***** Aprendiendo nuevas materias *****\n";
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Crear un nuevo personaje llamado 'me'
    std::cout << "\n***** Creando un nuevo personaje llamado 'me' *****\n";
    ICharacter *me = new Character("me");

    // Crear un objeto temporal de AMateria
    std::cout << "\n**** Creando un objeto temporal de AMateria ****\n";
    AMateria *tmp;

    // Equipar materias al personaje 'me'
    std::cout << "\n**** crear materia 'ice' ****\n";
    tmp = src->createMateria("ice");
    std::cout << "\n**** Equipando materia 'ice' ****\n";
    me->equip(tmp);
   /*  std::cout << "\n**** crear materia 'cure' ****\n";
    tmp = src->createMateria("cure");
    std::cout << "\n**** Equipando materia 'cure' ****\n";
    me->equip(tmp);

    // Crear un nuevo personaje llamado 'bob'
    std::cout << "\n***** Creando un nuevo personaje llamado 'bob' *****\n";
    ICharacter *bob = new Character("bob");

    // 'me' ataca a 'bob' con las materias equipadas
    std::cout << "\n***** 'me' ataca a 'bob' con las materias equipadas ****\n";
    me->use(0, *bob);
    me->use(1, *bob);

    // Eliminar los personajes y la fuente de materia
    std::cout << "\n**** Eliminando los personajes y la fuente de materia ****\n";
    delete bob;
    delete me;  */
    delete src;

    return 0;
}