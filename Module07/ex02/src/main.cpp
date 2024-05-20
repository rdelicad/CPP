/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:11:48 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/20 18:53:09 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

#define MAX_VAL 5
#define VAL_EXCEPT 10

int main()
{
	//probando array vacio (constructor default)
	std::cout << "\033[1;34mProbando array vacio\033[0m" << std::endl;
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	std::cout << std::endl;
	
	//probando array con N elementos (constructor con n elementos)
	std::cout << "\033[1;34mProbando array con N elementos\033[0m" << std::endl;
	Array<int> arrayInt(MAX_VAL);
	std::cout << "Array size: " << arrayInt.size() << std::endl;
	std::cout << std::endl;

	//probando operador de asignacion y constructor de copia
	std::cout << "\033[1;34mProbando operador de asignacion y constructor de copia\033[0m" << std::endl;
	Array<int> copy(arrayInt);
	std::cout << "Copy size: " << copy.size() << std::endl;
	std::cout << std::endl;

	//probando operador [] y excepcion out of range
	std::cout << "\033[1;34mProbando operador [] y excepcion out of range\033[0m" << std::endl;
	try
	{
		for (size_t i = 0; i < MAX_VAL; i++)
		{
			arrayInt[i] = i;
			std::cout << "arrayInt[" << i << "] = " << arrayInt[i] << std::endl;
		}
		arrayInt[MAX_VAL] = VAL_EXCEPT;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	
	return 0;
}



