/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:14:07 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/19 21:28:29 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

static void parseArgs(int ac, char **av, std::vector<int> &vectorData, std::list<int> &listData)
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
        listData.push_back(static_cast<int>(num));
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
    std::list<int> listData;
    parseArgs(ac, av, vectorData, listData);

    PmergeMe sorter;

    // Mostrar secuencias antes de ordenas
    std::cout << "Before vector:    ";
    sorter.print(vectorData);
    std::cout << "Before list:      ";
    sorter.print(listData);

    /* // Ordenar y mostrar secuencias
    sorter.mergeInsertSort(vectorData);
    sorter.mergeInsertSort(listData);

    std::cout << "After sorting:" << std::endl;
    sorter.print(vectorData);
    sorter.print(listData);

    // Mostrar tiempo de ordenamiento
    double timeVector = sorter.getTimeSort(vectorData);
    double timeList = sorter.getTimeSort(listData);

    std::cout << "Time to sort vector: " << timeVector << "s" << std::endl;
    std::cout << "Time to sort list: " << timeList << "s" << std::endl; */
       

    return 0;
}