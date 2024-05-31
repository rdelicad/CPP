/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:15:38 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/31 14:20:50 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutanStack.hpp"

template<typename T>
MutanStack<T>::MutanStack()
: std::stack<T>()
{}

template<typename T>
MutanStack<T>::~MutanStack()
{
	std::cout << "\033[2;36m[Mutan] Destructor default\033[0m" << std::endl;
}

template<typename T> 
MutanStack<T>::MutanStack(const MutanStack &copy)
{
	*this = copy;
}

template<typename T> 
MutanStack &MutanStack::operator(const MutanStack &other)
{
	if (this != &other)
	{
		this->c = other.c;
	}
	return *this;
}

template<typename T>
typename MutanStack<T>::iterator MutanStack<T>::begin()
{
	return this->begin();
}

template<typename T>
typename MutanStack<T>::iterator MutanStack<T>::end() 
{
	return this->end();
}

