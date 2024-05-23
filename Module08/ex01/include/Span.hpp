/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:29:50 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/23 16:55:28 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	private:  
		size_t _n;
		std::vector<int> _numbers;
	public:  
		Span(size_t n);
		
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();

		class maxNumberException : std::exception {
			const char *what() const throw() {
				return ("\033[1;31mException: impossible to add more elements!!\033[0m"); 
			}	
		};
		
		class sectionException : std::exception {
			const char *what() const throw() {
				return ("\033[1;34mSection no found!!\033[0m");
			}
		};
};

#endif