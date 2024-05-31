/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:49:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/31 12:45:48 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(size_t n)
: _n(n)
{}

void Span::addNumber(const int num)
{
	try 
	{
		if (_numbers.size() < _n) 
			_numbers.push_back(num);
		else
			throw maxNumberException();
	} 
	catch (const maxNumberException &e) 
	{
		std::cerr << e.what() << std::endl;
		return;
	}
}

int Span::shortestSpan()
{
	try 
	{
		if (_numbers.size() < 2) 
			throw Span::sectionException();
	} 
	catch (const sectionException &e) 
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	
	std::sort(_numbers.begin(), _numbers.end());
	int shortest = _numbers[1] - _numbers[0];

	size_t i = 1;
	while (i < _numbers.size() - 1)
	{
		shortest = std::min(shortest, _numbers[i + 1] - _numbers[i]);
		i++;	
	}
	
	return shortest;
}

int Span::longestSpan() 
{
	try {
		if (_numbers.size() < 2) {
			throw Span::sectionException();
		}
	} catch (const sectionException &e) {
		std::cerr << e.what() << std::endl;
		return 0;
	}
	
    std::vector<int>::iterator minElement = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator maxElement = std::max_element(_numbers.begin(), _numbers.end());
    return *maxElement - *minElement;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (_numbers.size() >= _n)
			throw maxNumberException();
		else
		{
			_numbers.push_back(*begin);
			begin++;
		}
	}
}
