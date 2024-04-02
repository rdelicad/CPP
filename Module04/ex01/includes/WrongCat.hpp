/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WronCat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:27:36 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/26 20:30:26 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:  
		WrongCat();
		WrongCat(const WrongCat &);
		virtual ~WrongCat();
		
		WrongCat &operator = (const WrongCat &);

		void makeSound() const;	
};

#endif