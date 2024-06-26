/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:59:26 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/14 10:44:32 by rdelicad         ###   ########.fr       */
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

		Ice *clone() const;
		std::string const &getType() const;
		void use(ICharacter &);
};

#endif