/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:59:36 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/18 11:24:39 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T, typename F> 
void iter(T *arr, int size, F func)
{
	int i = 0;
	while (i < size)
	{
		func(arr[i]);
		i++;
	}
}

template<typename T> 
void print(T const &x)
{
	std::cout << x << std::endl;
}

#endif