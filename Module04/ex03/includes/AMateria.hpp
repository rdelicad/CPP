/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:20:30 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/05 17:37:36 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Headers.h"

class AMateria
{
	protected:  
		std::string _type;
	public:
		AMateria();
		AMateria(const AMateria &);
		virtual ~AMateria();
		
		AMateria &operator = (const AMateria &);
		
		AMateria(std::string const & type);
		std::string const & getType() const;
		
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter & target);	
};

#endif 