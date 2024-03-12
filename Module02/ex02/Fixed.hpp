/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:54:49 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/12 20:45:49 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionaBits = 8;
	public: 
		Fixed();
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed & );
		Fixed & operator = ( const Fixed & );
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const );
		
		float toFloat( void ) const;
		int toInt( void ) const;

		// comparison operators
		bool operator > ( const Fixed & ) const;
		bool operator < ( const Fixed & ) const;
		bool operator >= ( const Fixed & ) const;
		bool operator <= ( const Fixed & ) const;
		bool operator == ( const Fixed & ) const;
		bool operator != ( const Fixed & ) const;
		
		// arithmetic operators
		Fixed operator + ( const Fixed & ) const;
		Fixed operator - ( const Fixed & ) const;
		Fixed operator * ( const Fixed & ) const;
		Fixed operator / ( const Fixed & ) const;

		// increment and decrement operators
		Fixed & operator ++ ( void );
		Fixed operator ++ ( int );
		Fixed & operator -- ( void );
		Fixed operator -- ( int );

		// static functions
		static Fixed & max( Fixed &, Fixed & );
		static Fixed & min( Fixed &, Fixed & );
		static const Fixed & max( const Fixed &, const Fixed & );
		static const Fixed & min( const Fixed &, const Fixed & );
};


std::ostream & operator << ( std::ostream &, const Fixed & );

#endif