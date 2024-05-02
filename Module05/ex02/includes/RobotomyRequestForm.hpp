/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:12:40 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/02 20:01:52 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotoMyRequestForm : public AForm
{
	public:
		RobotoMyRequestForm();
		~RobotoMyRequestForm();
		RobotoMyRequestForm(const std::string &);
		RobotoMyRequestForm(const RobotoMyRequestForm &);
		RobotoMyRequestForm &operator=(const RobotoMyRequestForm &);
		bool execute(Bureaucrat const &) const;
};

#endif