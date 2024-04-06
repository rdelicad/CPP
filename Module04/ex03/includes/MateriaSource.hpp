/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:54 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/06 10:11:37 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Headers.h"

class MateriaSource : public IMateriaSource
{
	private:
		std::string _type;
	public:  
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource();
		
		MateriaSource &operator = (const MateriaSource &);

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const & type);
};

#endif