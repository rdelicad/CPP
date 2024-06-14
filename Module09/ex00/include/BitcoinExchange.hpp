/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:37:14 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/14 16:30:28 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <exception>
#include <limits>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _bitcoinPrices;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string &dataCsv);
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        ~BitcoinExchange();
        
        void comparePrices(const std::string &inputFile);
        std::string findClosestPreviousDate(const std::string &date);

};
    

#endif