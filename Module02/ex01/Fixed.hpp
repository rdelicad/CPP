/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:21:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/09 12:35:38 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed( void );
		Fixed( const int intNbr );
		Fixed( const float floatNbr );
		Fixed( const Fixed& copy );
		Fixed& operator = ( const Fixed& other );
		~Fixed( void );

		int getRawBits( void ) const;
		void serRawBits( int const raw );
		
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator << ( std::ostream& op, Fixed const & i);

#endif