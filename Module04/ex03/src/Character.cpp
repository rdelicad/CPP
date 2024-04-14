/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:51:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/14 12:46:25 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

// inicializamos el nombre del personaje
// establecemos todos los elementos del inventario a null
Character::Character(std::string name) : _name(name)
{
	std::cout << "[Character] constructor called"
				<< std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_currPos = 0;
}

// copiamos el nombre
// copiamos todos los elementos
Character::Character(const Character &copy)
{
	std::cout << "[Character] copy constructor called" << std::endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

// liberamos memoria de todos los elementos del inventario
Character::~Character()
{
	std::cout << "[Character] Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)  
		delete _inventory[i];
}
// 43. evitamos la autoasignacion
// 46. liberamos la memoria de elementos existentes
// 51. copiamos el nombre
// 52. creamos copias profundas
Character &Character::operator=(const Character &other)
{
	std::cout	<< "[Character] operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)  
			delete _inventory[i];
	}
	_name = other._name;
	for (int i = 0; i < 4; ++i) 
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;	
	}
	return *this;
}

// devolvemos el nombre del personaje
std::string const &Character::getName() const
{
	return _name;
}

// equipamos la materia en el primer espacio
// si no encontramos un espacio vacio, no hacemos nada
void Character::equip(AMateria *m)
{
	if (_currPos < 4)
	{
		_inventory[_currPos] = m;
		_currPos++;
	}
}

// al desequipar, establecemos el elemento de ese indice a 0
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

// usamos materia del inventario
void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

