/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:21:25 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/03 21:01:52 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain( const Brain &other )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "[Brain] Copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain &Brain::operator = ( const Brain &other )
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "[Brain] Assignation operator called" << std::endl;
	return *this;
}

std::string Brain::getIdea( int i ) const
{
	if (i < 0 || i >= 100)
		return "Invalid index";
	return ideas[i];
}

void Brain::setIdea( int i, const std::string &idea )
{
	if (i < 0 || i >= 100)
		return ;
	ideas[i] = idea;
}

