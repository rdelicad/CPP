/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:59:41 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/05 17:37:40 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Headers.h"

class Cure : public AMateria
{
	public:  
		Cure();
		Cure(const Cure &);
		~Cure();

		Cure &operator = (const Cure &);

		std::string const & getType() const;
		Cure *clone() const;
		void use(ICharacter& target);
};

#endif