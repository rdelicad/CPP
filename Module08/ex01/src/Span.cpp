/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:49:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/03 16:26:11 by lxuxer           ###   ########.fr       */
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
	
	std::list<int>::iterator it = _numbers.begin();
	std::list<int>::iterator itNext = _numbers.begin();
	itNext++;
	int shortest = *itNext - *it;

	while (itNext != _numbers.end()) 
	{
		shortest = std::min(shortest, *itNext - *it);
		it++;
		itNext++;
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
	
    std::list<int>::iterator minElement = std::min_element(_numbers.begin(), _numbers.end());
	std::list<int>::iterator maxElement = std::max_element(_numbers.begin(), _numbers.end());
    return *maxElement - *minElement;
}

void Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end)
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
