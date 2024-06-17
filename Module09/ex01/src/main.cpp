/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:49:06 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/17 19:02:17 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

static bool parseRPN(std::string str)
{
    size_t i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
            i++;
        else if (isdigit(str[i]) && (isdigit(str[i + 1])))
        {
            std::cout << "Error: number too long" << std::endl;
            return false;
        }
        else if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != ' ')
        {
            std::cout << "Error: Invalid character" << std::endl;
            return false;
        }
        else if (isdigit(str[i]) && (str[i] >= 0 && str[i] <= 9))
            i++;
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            i++;
        else
            i++;
    }
    return true;

}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./RPN \"[expression]\" << std::endl";
        return 1;
    }
    parseRPN(av[1]);
    RPN rpn(av[1]);
    rpn.calculateRPN();
    return 0;
}
