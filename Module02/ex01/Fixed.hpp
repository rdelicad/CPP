/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:21:34 by rdelicad          #+#    #+#             */
/*   Updated: 2024/03/07 19:29:49 by rdelicad         ###   ########.fr       */
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
		Fixed( void );
		Fixed( const Fixed& copy );
		Fixed& operator = ( const Fixed& other );
		~Fixed( void );
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif