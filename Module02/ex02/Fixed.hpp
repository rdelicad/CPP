/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:54:49 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/11 20:00:42 by rdelicad         ###   ########.fr       */
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
		Fixed &operator = ( const Fixed & );
		~Fixed();
		
		int getRawBits( void ) const;
		void serRawBits( int const );
		
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif