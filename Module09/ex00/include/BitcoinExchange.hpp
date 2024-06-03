/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:37:14 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/03 18:57:22 by lxuxer           ###   ########.fr       */
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
        
        float getBitcoinPrice(const std::string &date);
    
        class exceptionOpen : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: could not open file.";
                }
        };
        class exceptionBadData : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: bad data.";
            }
        };
};
    

#endif