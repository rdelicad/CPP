/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:08:31 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/02 17:07:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl;
	
	const Animal* salchicha = new Dog();
	std::cout << salchicha->getType() << std::endl;
	salchicha->makeSound();
	std::cout << std::endl;
	
	const Animal* persa = new Cat();
	std::cout << persa->getType() << std::endl;
	persa->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << wrongAnimal->getType() << std::endl;
	wrongAnimal->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongSalchicha = new WrongCat();
	std::cout << wrongSalchicha->getType() << std::endl;
	wrongSalchicha->makeSound();
	std::cout << std::endl;

	delete animal;
	std::cout << std::endl;
	delete salchicha;
	std::cout << std::endl;
	delete persa;
	std::cout << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;
	delete wrongSalchicha;
	std::cout << std::endl;
	
	return 0;
}