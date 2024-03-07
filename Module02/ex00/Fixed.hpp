/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:56:15 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 22:18:57 by rdelicad         ###   ########.fr       */
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
		Fixed( const Fixed& copy );
		Fixed& operator = ( const Fixed& other );
		~Fixed( void );
		
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif