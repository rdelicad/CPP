/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:11:01 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 17:51:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.h"

// inicializamos el indice
// establecemos todos los elementos del inventario a null
MateriaSource::MateriaSource() : _index(0)
{
	std::cout << "[MateriaSource] constructor called"
				<< std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	_index = 0;
}

// copiamos el nombre
// copiamos todos los elementos
MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "[MateriaSource] copy constructor called" << std::endl;
	_index = copy._index;
	for (int i = 0; i < 4; i++)
	{
		if (copy._materias[i])
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

// liberamos memoria de todos los elementos del inventario
MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)  
		delete _materias[i];
}
// 43. evitamos la autoasignacion
// 46. liberamos la memoria de elementos existentes
// 51. copiamos el indice
// 52. creamos copias profundas
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout	<< "[MateriaSource] operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)  
			delete _materias[i];
	}
	_index = other._index;
	for (int i = 0; i < 4; i++) 
	{
		if (other._materias[i])
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;	
	}
	return *this;
}

// al aprender una materia, la almacenamos en el array
void MateriaSource::learnMateria(AMateria *m)
{
	if (_index < 4)
	{
		_materias[_index] = m;
		_index++;
	}
}

// al crear materia la buscamos en el array y la clonamos
// si no existe, no hacemos nada
AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _index; i++)  
	{
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return NULL;
}