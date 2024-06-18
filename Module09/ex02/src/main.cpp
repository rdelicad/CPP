/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:14:07 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/18 19:00:10 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

static void parseArgs(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        //std::cout << av[i] << std::endl;
        // verficar si es un numero
        for (int j = 0; av[i][j]; j++)
        {
            if (av[i][j] == '+')
                j++;
            if (av[i][j] == '0')
            {
                std::cout << "Error: numero 0" << std::endl;
                exit(1);
            }
            if (isdigit(av[i][j]) == 0)
            {
                std::cout << "Error" << std::endl;
                exit(1);
            }
        }

        long num = atol(av[i]);
        // verificar si es INT_MAX
        if (num > INT_MAX)
        {
            std::cout << "Error: numero INT_MAX" << std::endl;
            exit(1);
        }
        
        // verificar si es un numero negativo
        if (num <= 0)
        {
            std::cout << "Error: numero negativo" << std::endl;
            exit(1);
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Usage: ./PmergeMe [int1] [int2] [int3] ..." << std::endl;
        return 1;
    }
    parseArgs(ac, av);

    return 0;
}