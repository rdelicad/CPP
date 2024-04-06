/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:59:26 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/05 17:37:43 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Headers.h"

class Ice : public AMateria
{
	public:  
		Ice();
		Ice(const Ice &);
		~Ice();

		Ice &operator = (const Ice &);

		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
};

#endif