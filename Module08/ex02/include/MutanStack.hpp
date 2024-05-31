/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:52:49 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/31 14:55:11 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutanStack : public std::stack<T>
{
	MutanStack();
	virtual ~MutanStack();
	MutanStack(const MutanStack &);
	MutanStack &operator=(const MutanStack &);
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

#include "../src/MutanStack.tpp"

#endif