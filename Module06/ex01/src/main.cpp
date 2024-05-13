/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:09 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/13 11:30:16 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/ScalarConverter.hpp"

/* int main(int ac, char **av) 
{
	if (ac != 2)
	{
		std::cout << "Introduce un argumento" << std::endl;
		return 0;
	}
	ScalarConverter::convert(av[1]);
	return 0;
} */

#include "../includes/Serializer.hpp"
#include "../includes/Data.h"

int main(int ac, char **av) 
{
	if (ac != 2)
	{
		std::cout << "only one argument!!!" << std::endl;
		return 1;
	} 
    Data data;
    data.someData = atoi(av[1]);

	//convertir direccion de memoria data a uintptr_t
    uintptr_t raw = Serializer::serialize(&data);
	std::cout << "raw decimal address uintptr_t: " << raw << std::endl;
	
	//convertir uintptr_t a direccion de memoria
    Data *ptr = Serializer::deserialize(raw);
    
	if (ptr == NULL)
	{
		std::cout << "\033[1;31m Error!!! \033[0m" << std::endl;
		std::cout << "ptr is NULL" << std::endl;
	} 
	else if (ptr == &data) 
	{
		std::cout << "\033[1;32m Sucess!!! \033[0m" << std::endl;
        std::cout  << "ptr address: " << ptr << std::endl;
		std::cout << "&data address: " << &data << std::endl;
    } 
	else 
	{
        std::cout << "No serializer!!!." << std::endl;
    }

    return 0;
}