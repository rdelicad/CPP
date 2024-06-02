/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:15:38 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/02 10:10:08 by lxuxer           ###   ########.fr       */
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
MutanStack<T> &MutanStack<T>::operator=(const MutanStack<T> &other)l
{
	if (this != &other)
	{
		std::stack<T>::operator=(other);
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

