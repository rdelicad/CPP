/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:18:48 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/26 20:11:46 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:  
		Dog();
		Dog(const Dog &);
		virtual ~Dog();
		
		Dog &operator = (const Dog &);
		
		void makeSound() const;	
};

#endif