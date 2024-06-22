/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:14:07 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/22 11:27:29 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

static void parseArgs(int ac, char **av, std::vector<int> &vectorData, std::deque<int> &dequeData)
{
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (av[i][j] == '+')
                j++;
            if (av[i][0] == '0')
            {
                std::cout << "Error: numero 0" << std::endl;
                exit(1);
            }
            else if (isdigit(av[i][j]) == 0)
            {
                std::cout << "Error" << std::endl;
                exit(1);
            }
        }

        long num = atol(av[i]);
        if (num > INT_MAX || num <= 0)
        {
            std::cout << "Error: numero" << std::endl;
            exit(1);
        }
        
        vectorData.push_back(static_cast<int>(num));
        dequeData.push_back(static_cast<int>(num));
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Usage: ./PmergeMe [int1] [int2] [int3] ..." << std::endl;
        return 1;
    }
    
    std::vector<int> vectorData;
    std::deque<int> dequeData;
    parseArgs(ac, av, vectorData, dequeData);

    PmergeMe sorter;

    // Mostrar secuencias antes de ordenas
    std::cout << "Before vector:    ";
    sorter.print(vectorData);
    std::cout << "Before list:      ";
    sorter.print(dequeData);

    // Ordenar y mostrar secuencias
    sorter.mergeInsertSort(vectorData);
    sorter.mergeInsertSort(dequeData);

    std::cout << "After vector:     ";
    sorter.print(vectorData);
    std::cout << "After deque:      ";
    sorter.print(dequeData);

    // Mostrar tiempo de ordenamiento
    double timeVector = sorter.getTimeSort(vectorData);
    double timeDeque = sorter.getTimeSort(dequeData);

    int numbers = ac - 1;
    std::cout   << "Time to process a range of " << numbers 
                << " elements with std::vector: " << timeVector 
                << " µs" << std::endl;
    std::cout   << "Time to process a range of " << numbers 
                << " elements with std::deque: " << timeDeque
                << " µs" << std::endl;
       

    return 0;
}