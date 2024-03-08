/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:21:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/08 18:23:19 by rdelicad         ###   ########.fr       */
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
		Fixed( const int nbr );
		Fixed( const Fixed& copy );
		Fixed& operator = ( const Fixed& other );
		~Fixed( void );
		
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif