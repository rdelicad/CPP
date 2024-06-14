/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:49:26 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/14 16:12:31 by rdelicad         ###   ########.fr       */
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
    //Inicializa la fecha más cercana como vacia
    std::string closestDate = ""; 
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

static bool parseDate(std::string &date)
{
    date.erase(0, date.find_first_not_of(' ')); // espacios en blanco al inicio
    date.erase(date.find_last_not_of(' ') + 1); // espacios en blanco al final

    // Verifica si la fecha está vacía
    if (date.empty())
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }

    // Verifica si la fecha tiene el formato correcto
    if (date[4] != '-' || date[7] != '-' || date.size() != 10)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }

    // Extrae el año, el mes y el día de la fecha
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    // Verifica si el año es válido
    if (year <= 0)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }

    // Verifica si el mes es válido
    if (month <= 0 || month > 12)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }

    // Verifica si el día es válido
    int maxDay;
    if (month == 2)
    {
        // Febrero
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        maxDay = isLeap ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        // Abril, junio, septiembre, noviembre
        maxDay = 30;
    }
    else
    {
        // Enero, marzo, mayo, julio, agosto, octubre, diciembre
        maxDay = 31;
    }

    if (day <= 0 || day > maxDay)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }

    return true;
}

static bool parseValue(std::string &valueStr, const std::string &date)
{
    valueStr.erase(0, valueStr.find_first_not_of(' ')); // espacios en blanco al inicio
    valueStr.erase(valueStr.find_last_not_of(' ') + 1); // espacios en blanco al final

    // Verifica si el valor está vacío
    if (valueStr.empty())
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    
    // Verifica si el valor excede el maximo de int
    double value = std::atof(valueStr.c_str());
    if (value > std::numeric_limits<int>::max())
    {
        std::cout << "Error: too large a number." << std::endl;
        return false; 
    }

    // Verifica si el valor es positivo
    else if (value <= 0 || value > 1000) 
    { 
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    
    return true;
}

// Methods
void BitcoinExchange::comparePrices(const std::string &inputFile)
{
    // Abre el archivo de entrada usando el nombre de archivo proporcionado
    std::ifstream file(inputFile.c_str()); 
    if (!file.is_open()) 
    {
        std::cerr << "Error: could not open file." << std::endl;
    }
    
    std::string line;
    std::getline(file, line); // Omitir la primera línea del archivo
    while (std::getline(file, line)) // Lee el archivo línea por línea
    {
        std::istringstream iss(line); // Utiliza un stream de strings para procesar la línea
        std::string date, valueStr; // Inicializa las variables de fecha y valor como cadenas de texto
        std::getline(iss, date, '|'); // Extrae la fecha hasta el delimitador '|'
        std::getline(iss, valueStr); // Extrae el valor después del delimitador '|'

        // Parsea la fecha
        if (!parseDate(date))
        {
            continue;
        }

        // Parsea el valor
        if (!parseValue(valueStr, date))
        {
            continue;
        }
        
             // Verifica si la fecha existe en el mapa de precios
            if (_bitcoinPrices.find(date) == _bitcoinPrices.end()) 
            {
                std::string closestDate = findClosestPreviousDate(date);
                if (!closestDate.empty()) // Verifica si se encontró una fecha cercana
                {
                    std::cout << date << " => " << value << " = " << _bitcoinPrices[closestDate] * value << std::endl;
                }
            }
            else
            {
                float bitcoinPrice = _bitcoinPrices[date]; // Obtiene el precio de Bitcoin para la fecha dada
                std::cout << date << " => " << value << " = " << value * bitcoinPrice << std::endl; // Imprime la fecha, el valor y el resultado
            }
        }
}
