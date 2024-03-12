/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:47:11 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/12 21:06:03 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}
Fixed::~Fixed() {}

Fixed::Fixed( const int intNbr )
{
	_fixedPointValue = intNbr << _fractionaBits;
}

Fixed::Fixed( const float floatNbr )
{
	_fixedPointValue = roundf(floatNbr * (1 << _fractionaBits));
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}

Fixed &Fixed::operator = ( const Fixed &other )
{
	if (this != &other)
		_fixedPointValue = other.getRawBits();

	return *this;	
}

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

int Fixed::toInt() const
{
	return this->_fixedPointValue >> _fractionaBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(this->getRawBits()) / (1 << _fractionaBits);
}

/**
 * * comparison operators
 */

bool Fixed::operator > ( const Fixed &other ) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator < ( const Fixed &other ) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator >= ( const Fixed &other ) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator <= ( const Fixed &other ) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator == ( const Fixed &other ) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator != ( const Fixed &other ) const
{
	return this->getRawBits() != other.getRawBits();
}

/**
 * * aritmetic operators
 */ 

Fixed Fixed::operator + ( const Fixed &other ) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - ( const Fixed &other ) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * ( const Fixed &other ) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / ( const Fixed &other ) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

/**
 * * increment and decrement operators
*/

Fixed &Fixed::operator ++ ()
{
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator ++ ( int )
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return tmp;
}

Fixed &Fixed::operator -- ()
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator -- ( int )
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return tmp;
}

/**
 * * static functions
 */

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

/**
 * * output operator
 */

std::ostream & operator << ( std::ostream &out, const Fixed &fixed )
{
	out << fixed.toFloat();
	return out;
}