/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:56:15 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 16:48:45 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					_nbr;
		static const int	_point;
	public:
		// Constructores
		Fixed( void );
		Fixed( const Fixed& copy );
		
		// Operators
		Fixed& operator = ( const Fixed& other );

		// Destructor
		~Fixed( void );

		// Methods
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif