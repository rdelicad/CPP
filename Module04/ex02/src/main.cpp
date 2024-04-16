/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:08:31 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/15 20:07:58 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

/* void testAbstractClass()
{
	Animal animal;
} */

static  void testingAssignmentOperators()
{
	std::cout << std::endl;
	std::cout << "Testing assignment operators [Dog]" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << std::endl;
	Dog dog1;
	Dog dog2;
	dog2 = dog1;
	
	std::cout << std::endl;
	std::cout << "Testing assignment operators [Cat]" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << std::endl;
	Cat cat1;
	Cat cat2;
	cat2 = cat1;
	std::cout << std::endl;
	std::cout << "--------Destructor--------" << std::endl;
}

static void testingCopyConstructors()
{
	std::cout << std::endl;
	std::cout << "Testing copy constructors [Dog]" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;
	Dog dog1;
	std::cout << std::endl;
	std::cout << "-----------------------\n";
	Dog dog2(dog1);
	
	std::cout << std::endl;
	std::cout << "Testing copy constructors [Cat]" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	std::cout << std::endl;
	std::cout << "--------Destructor--------" << std::endl;
}

int main()
{
	const int size = 100;
	Animal *animals[size];

	std::cout << std::endl;
	std::cout << "Testing constructors array Dog and Cat" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << std::endl;
	std::cout << "Testing makeSound and delete" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout	<< "Animal " << i << ": " 
					<< "type: " 
					<< animals[i]->getType() 
					<< std::endl;
		animals[i]->makeSound();
		delete animals[i];
		std::cout << std::endl;
	}
	
	testingCopyConstructors();
	testingAssignmentOperators();
	//testAbstractClass();

	return 0;
}