/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:38:32 by rdelicad          #+#    #+#             */
/*   Updated: 2024/04/02 19:20:56 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain( const Brain & );
		~Brain();

		Brain &operator = ( const Brain & );
		
		std::string getIdea( int ) const;
		void setIdea( int, const std::string & );
};

#endif