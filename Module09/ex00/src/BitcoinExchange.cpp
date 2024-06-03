/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:49:26 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/03 19:13:05 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const std::string &dataCsv)
{
    std::ifstream file(dataCsv.c_str());
    std::string line;
    std::string date;
    double price;

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }

    // Omitir la primera linea
    std::getline(file, line);
    
    // iterar sobre cada linea del archivo csv
    while (std::getline(file, line))
    {
        std::stringstream ss(line);

        // Parsear la linea
        if (std::getline(ss, date, ',') && ss >> price)
        {
            _bitcoinPrices[date] = price;
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
    _bitcoinPrices = copy._bitcoinPrices;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

// Methods
float BitcoinExchange::getBitcoinPrice(const std::string &date)
{
    try 
    {
        std::map<std::string, float>::iterator it = _bitcoinPrices.upper_bound(date);

        if (it == _bitcoinPrices.begin())
        {
            throw exceptionBadData();
        }
    
        --it;

        return it->second;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}
