/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:28:52 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/13 13:41:33 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base *p)
{
	if (p == NULL)
    {
        std::cout << "NULL pointer" << std::endl;
        return;
    }
	
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception&)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::exception&)
        {
            try
            {
                dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (std::exception&)
            {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}
