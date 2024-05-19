/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:52:20 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/18 12:23:26 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
: _array(NULL), _size(0)
{
	std::cout << "\033[2;34mConstructor default\033[0m" << std::endl;
}


template<typename T>
Array<T>::~Array()
{
	std::cout << "\033[2;34mDesstructor default\033[0m" << std::endl;
	delete[] _array;
}

template<typename T>
Array<T>::Array(unsinged int n)
: _array(new T[n]), _size(n)
{
	std::cout << "\033[2;34mConstructor array n elemens\033[0m" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &copy)
: _array(new T[copy._size]), _size(copy._size)
{
	std::cout << "\033[2;34mConstructor copy\033[0m" << std::endl;
	size_t i = 0;
	while (i < copy._size)
	{
		_array[i] = copy._array[i];
		i++;
	}
}

template<typename T> 
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this !+ other)
	{
		if (_array)
			delete[] _array;
		_size = other._size;
		_array = new T[_size];
		size_t i = 0;
		while (i < _size)
		{
			_array[i] = other._array[i];
			i++;
		}
	}
	return *this;
}
