/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:22:08 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/13 10:35:57 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "\033[2;34m[Serializer] Constructor default\033[0m" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "\033[2;34m[Serializer] Destructor called\033[0m" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	std::cout << "[Serializer] Copy constructor called" << std::endl;
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	std::cout << "[Serializer] Operator called" << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
