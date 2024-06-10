/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:49:26 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/10 20:37:04 by lxuxer           ###   ########.fr       */
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

std::string BitcoinExchange::findClosestPreviousDate(const std::string &date)
{
    std::string closestDate = ""; //Inicializa la fecha más cercana como vacia
    for (std::map<std::string, float>::iterator it = _bitcoinPrices.begin(); it != _bitcoinPrices.end(); ++it)
    {
        if (it->first < date) // Verifica si la fecha actual es anterior a la fecha dada
        {
            closestDate = it->first; // Actualiza la fecha más cercana
        }
        else
        {
            break; // Sale del bucle si la fecha actual es posterior a la fecha dada
        }
    }
    return closestDate; // Devuelve la fecha más cercana
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
    std::getline(file, line); // Omitir la primera línea del archivo
    while (std::getline(file, line)) // Lee el archivo línea por línea
    {
        std::istringstream iss(line); // Utiliza un stream de strings para procesar la línea
        std::string date, valueStr; // Inicializa las variables de fecha y valor como cadenas de texto
        std::getline(iss, date, '|'); // Extrae la fecha hasta el delimitador '|'
        std::getline(iss, valueStr); // Extrae el valor después del delimitador '|'

        // Verifica si el valor está vacío
        if (valueStr.empty())
        {
            std::cout << "Error: bad input => " << date << std::endl; 
            continue;
        }
        
        // Verifica si el valor excede el maximo de int
        double value = std::atof(valueStr.c_str());
        if (value > std::numeric_limits<int>::max())
        {
            std::cout << "Error: too large a number." << std::endl; 
            continue;
        }

        // Verifica si el valor es positivo
        if (value <= 0) 
        { 
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        
        try
        {
             // Verifica si la fecha existe en el mapa de precios
            if (_bitcoinPrices.find(date) == _bitcoinPrices.end()) 
            {
                std::string closestDate = findClosestPreviousDate(date);
                if (!closestDate.empty()) // Verifica si se encontró una fecha cercana
                {
                    std::cout << date << " => " << value << " = " << _bitcoinPrices[closestDate] * value << std::endl;
                }
                else
                {
                    throw exceptionNoDate();   
                }
            }
            else
            {
                float bitcoinPrice = _bitcoinPrices[date]; // Obtiene el precio de Bitcoin para la fecha dada
                std::cout << date << " => " << value << " = " << value * bitcoinPrice << std::endl; // Imprime la fecha, el valor y el resultado
            }
        }
        catch (const std::exception &e) // Captura cualquier excepción estándar
        {
            std::cout << e.what() << std::endl; // Imprime el mensaje de error de la excepción
        }
    }
}
