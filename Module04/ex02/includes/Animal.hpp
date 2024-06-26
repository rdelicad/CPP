/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:58:02 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/05 16:40:53 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:  
		std::string _type;
	public:
		Animal();
		Animal(const Animal &);
		virtual ~Animal();
		
		Animal &operator = (const Animal &);

		virtual void makeSound() const = 0;
		
		std::string getType() const;
};

#endif