/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:03:24 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/11 19:32:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int intNbr )
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = intNbr << _fractionalBits;
}

Fixed::Fixed( const float floatNbr )
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = static_cast<float>
		(roundf(floatNbr * (1 << _fractionalBits)));
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator = ( const Fixed &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void Fixed::serRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

int Fixed::toInt() const
{
	return this->_fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

std::ostream &operator << ( std::ostream &outPutStream, Fixed const &fixedObj )
{
	outPutStream << fixedObj.toFloat();
	return outPutStream;
}