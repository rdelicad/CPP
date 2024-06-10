/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:49:26 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/10 17:44:41 by lxuxer           ###   ########.fr       */
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
void BitcoinExchange::comparePrices(const std::string &inputFile)
{
    // Abre el archivo de entrada usando el nombre de archivo proporcionado
    std::ifstream file(inputFile.c_str()); 
    if (!file.is_open()) {
        throw exceptionOpen();
    }
    
    std::string line;
    while (std::getline(file, line)) // Lee el archivo línea por línea
    {
        std::istringstream iss(line); // Utiliza un stream de strings para procesar la línea
        std::string date, valueStr;
        std::getline(iss, date, '|'); // Extrae la fecha hasta el delimitador '|'
        std::getline(iss, valueStr); // Extrae el valor después del delimitador '|'

        try
        {
            float value = std::atof(valueStr.c_str()); // Convierte el valor a float
            if (value <= 0) { // Verifica si el valor es positivo
                throw exceptionBadData(); // Lanza una excepción si el valor no es positivo
            }
            
            if (_bitcoinPrices.find(date) == _bitcoinPrices.end()) { // Verifica si la fecha existe en el mapa de precios
                std::cout << "Error: bad input => " << date << std::endl; // Imprime un error si la fecha no se encuentra
            }

            float bitcoinPrice = _bitcoinPrices[date]; // Obtiene el precio de Bitcoin para la fecha dada
            float result = value * bitcoinPrice; // Calcula el resultado de la multiplicación
            std::cout << date << " => " << value << " = " << result << std::endl; // Imprime la fecha, el valor y el resultado
        }
        catch (const std::exception &e) // Captura cualquier excepción estándar
        {
            std::cout << e.what() << std::endl; // Imprime el mensaje de error de la excepción
        }
    }
}
