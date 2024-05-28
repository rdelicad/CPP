/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:23:53 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/28 18:23:32 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main() 
{
    int arr[] = {-23, 34, 0, -12, -5};
    std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
    
    std::cout << "-----Normal mode--------" << std::endl;
    Span span(10);
    span.addNumber(numbers);
    

    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;
    
    std::cout << std::endl;
    std::cout << "-----Exception 1--------" << std::endl;
    int arrExcep1[] = {2, 5};
    std::vector<int> excep1(arrExcep1, arrExcep1 + sizeof(arrExcep1) / sizeof(arrExcep1[0]));
    Span ex1(1);
    ex1.addNumber(excep1);
    std::cout << std::endl;

    std::cout << "------Exception 2--------" << std::endl;
    std::vector<int> temp2(1, 3);
    Span excp2(20);
    excp2.addNumber(temp2);
    std::cout << "\033[1;34mShortest span: \033[0m" << excp2.shortestSpan() << std::endl;

    return 0;
}