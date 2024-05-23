/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:49:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/23 17:22:04 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(size_t n)
: _n(n)
{}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _n) {
		throw maxNumberException();
	}
	
	_numbers.push_back(number);
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2) {
		throw Span::sectionException();
	}
	
	std::sort(_numbers.begin(), _numbers.end());
	int shortest = _numbers[1] - _numbers[0];

	size_t i = 1;
	while (i < _numbers.size() - 1)
	{
		shortest = std::min(shortest, _numbers[1 + 1] - _numbers[i]);
		i++;	
	}
	
	return shortest;
}

int longestSpan() 
{
    if (_numbers.size() < 2) {
        throw Span::sectionException();
    }
	
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minmax = std::minmax_element(_numbers.begin(), _numbers.end());
    return *minmax.second - *minmax.first;
}
