/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:47 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 22:32:07 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void ) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& copy )
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = copy.getRawBits();
}

Fixed& Fixed::operator = ( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_fixedPointValue = other.getRawBits();
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
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

