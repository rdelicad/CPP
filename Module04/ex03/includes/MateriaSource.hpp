/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:54 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/14 12:49:44 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Headers.h"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materias[4];
		int _index;
	public:  
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource();
		
		MateriaSource &operator = (const MateriaSource &);

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const & type);
};

#endif