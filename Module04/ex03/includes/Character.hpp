/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 10:58:59 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/16 17:45:59 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Headers.h"

class Character : public ICharacter
{
	private:  
		AMateria *_inventory[4];
		std::string _name;
		int _currPos;
	public:  
		Character(std::string);
		Character(const Character &);
		~Character();

		Character &operator = (const Character &);
		
		std::string const &getName() const;
		void equip(AMateria *);
		void unequip(int);
		void use(int, ICharacter &);	
};

#endif