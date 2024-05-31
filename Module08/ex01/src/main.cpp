/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:23:53 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/31 12:48:21 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main() 
{
    std::cout << "\033[1;32m-----Normal mode--------\033[0m" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    
    std::cout << std::endl;
    std::cout << "\033[1;32m-----Exception 1--------\033[0m" << std::endl;
    Span ex1(1);
    ex1.addNumber(4);
    ex1.addNumber(5);
    std::cout << std::endl;

    std::cout << "\033[1;32m------Exception 2--------\033[0m" << std::endl;
    Span excp2(20);
    excp2.addNumber(1);
    std::cout << "\033[1;34mShortest span: \033[0m" << excp2.shortestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "\033[1;32m------Probando addRange--------\033[0m" << std::endl;
    Span sp2 = Span(5);

    std::vector<int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(17);
    v.push_back(9);
    v.push_back(11);
    
    sp2.addRange(v.begin(), v.end());
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    

    return 0;
}