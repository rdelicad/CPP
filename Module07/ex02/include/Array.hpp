/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:47:22 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/18 12:12:52 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
	private:  
		T *_array;
		size_t _size;
	public:  
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &other);
		
};

#endif