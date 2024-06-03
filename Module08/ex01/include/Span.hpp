/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:29:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/03 16:10:54 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <list>
#include <algorithm>

class Span
{
	private:  
		size_t _n;
		std::list<int> _numbers;
	public:  
		Span(size_t n);
		
		void addNumber(const int num);
		int shortestSpan();
		int longestSpan();
		void addRange(std::list<int>::iterator begin, std::list<int>::iterator end);

		class maxNumberException : public std::exception {
			public:  
				const char *what() const throw() {
					return ("\033[1;31mException: impossible to add more elements!!\033[0m"); 
				}	
		};
		
		class sectionException : public std::exception {
			public:  
				const char *what() const throw() {
					return ("\033[1;34mSection no found!!\033[0m");
				}
			};
};

#endif