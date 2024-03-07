/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:47 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 16:48:39 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_point = 8;

Fixed::Fixed ( void ) : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& copy )
{
	_nbr = copy._nbr;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_nbr = other.getRawBits();
	}
	
	return *this;
}

Fixed::~Fixed( void ) 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbr;
}

void Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}

