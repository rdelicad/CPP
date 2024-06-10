/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:37:14 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/10 20:33:28 by lxuxer           ###   ########.fr       */
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
    
        class exceptionOpen : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: could not open file.";
                }
        };
        class exceptionNoDate : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: no date.";
                }
        };
        class exceptionNegativePrice : public std::exception {
            public:
                const char *what() const throw() {
                    return "Error: not a positive number.";
                }
        };
};
    

#endif