/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:19:23 by rdelicad          #+#    #+#             */
/*   Updated: 2024/05/18 11:43:32 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int main()
{
	int arrayInt[] = {1, 2, 3};
	float arrayFloat[] = {1.2, 2.3, 3.5};
	char arrayChar[] = {'a', 'b', 'c'};
	
	iter(arrayInt, 3, print<int>);
	iter(arrayFloat, 3, print<float>);
	iter(arrayChar, 3, print<char>);

	return 0;
}