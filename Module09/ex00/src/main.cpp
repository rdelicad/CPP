/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:06:01 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/03 19:27:15 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main()
{
    BitcoinExchange exchange("data/data.csv");
    
    std::cout << "precio: " << exchange.getBitcoinPrice("2022-03-30") << std::endl;

    return 0;
}
