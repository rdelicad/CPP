/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:57:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/31 14:41:38 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

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
Array<T>::Array(unsigned int n)
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
	if (this != other)
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

template<typename T>
T &Array<T>::operator[](const size_t index)
{
	if (index >= _size)
		throw outOfRangeException();
	return _array[index];
}

template<typename T>
size_t Array<T>::size() const
{
	return _size;
}

template<typename T>
const char *Array<T>::outOfRangeException::what() const throw()
{
	return "\033[1;31mError: out of range\033[0m";
}
