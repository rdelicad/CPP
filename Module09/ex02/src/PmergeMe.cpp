/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:32:43 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/22 12:01:56 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::print(const std::vector<int> &data) const
{
    int count = 0;
    std::vector<int>::const_iterator it = data.begin();
    while (it != data.end() && count < 5)
    {
        std::cout << *it << " ";
        it++;
        count++;
    }
    if (data.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
}

void PmergeMe::print(const std::deque<int> &data) const
{
    int count = 0;
    std::deque<int>::const_iterator it = data.begin();
    while (it != data.end() && count < 5)
    {
        std::cout << *it << " ";
        it++;
        count++;
    }
    if (data.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
}

void PmergeMe::sortPair(std::vector<int> &data, size_t i, size_t j)
{
    if (data[i] > data[j]) {
        std::swap(data[i], data[j]);
    }
}

void PmergeMe::sortPair(std::deque<int> &data, size_t index)
{
    if (index < data.size() - 1 && data[index] > data[index + 1]) {
        std::swap(data[index], data[index + 1]);
    }
}

size_t PmergeMe::searchPosition(const std::vector<int> &data, int target, size_t left, size_t right)
{
    while (left < right)
    {
        size_t mid = left + (right - left) / 2;
        if (data[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

size_t PmergeMe::searchPosition(const std::deque<int> &data, int value)
{
    size_t low = 0; 
    size_t high = data.size();
    while (low < high)
    {
        size_t mid = low + (high - low) / 2;
        if (value <= data[mid]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

void PmergeMe::insert(std::vector<int> &data, size_t sortedSize, int element)
{
    size_t i = searchPosition(data, element, 0, sortedSize);
    data.insert(data.begin() + i, element);
}

void PmergeMe::insert(std::deque<int> &data, int value)
{
    size_t pos = searchPosition(data, value);
    data.insert(data.begin() + pos, value);
}

void PmergeMe::mergeInsertSort(std::vector<int> &data)
{
    // Si la lista tiene 0 o 1 elementos, ya está ordenada
    if (data.size() <= 1) return;
    
    // Paso 1: Agrupar en pares y ordena cada par
    // vector = [4, 2, 3, 1, 8, 7, 5, 6]
    // pares = (4, 2), (3, 1), (8, 7), (5, 6)
    // resultado = [2, 4, 1, 3, 7, 8, 5, 6]
    for (size_t i = 0; i < data.size() - 1; i += 2) {
        if (data[i] > data[i + 1]) {
            std::swap(data[i], data[i + 1]);
        }
    }

    // Paso 2: Crear una nueva lista con los elementos mayores de cada par
    // vector = [2, 4, 1, 3, 7, 8, 5, 6]
    // resultado = [4, 3, 8, 6]
    std::vector<int> largerElements;
    for (size_t i = 1; i < data.size(); i += 2) {
        largerElements.push_back(data[i]);
    }

    // Paso 3: Ordenar recursivamente la lista de elementos mayores
    // resultado = [3, 4, 6, 8]
    mergeInsertSort(largerElements);

    // Paso 4: Reconstruir la lista ordenada 
    // vector result = [3, 4, 6, 8]
    // vector data = [2, 4, 1, 3, 7, 8, 5, 6]
    // insertaremos los elementos faltantes en result de data
    std::vector<int> result = largerElements;

    // Paso 5: Insertar los elementos menores 
    // vector result = [2, 3, 4, 6, 8]
    // [...]
    // vector result = [1, 2, 3, 4, 5, 6, 7, 8]
    for (size_t i = 0; i < data.size(); i += 2) {
        insert(result, result.size(), data[i]);
    }

    // Actualizar el vector original con el resultado ordenado
    data = result;
}

void PmergeMe::mergeInsertSort(std::deque<int> &data)
{
    // Si el deque tiene 0 o 1 elementos, ya está ordenado
    if (data.size() <= 1) return;

    // Paso 1: Agrupar en pares y ordena cada par
    // deque = [4, 2, 3, 1, 8, 7, 5, 6]
    // pares = (4, 2), (3, 1), (8, 7), (5, 6)
    // resultado = [2, 4, 1, 3, 7, 8, 5, 6]
    for (size_t i = 0; i < data.size() - 1; i += 2) {
        sortPair(data, i);
    }

    // Paso 2: Dividir el deque en dos partes: los elementos mayores y los elementos menores
    // deque = [2, 4, 1, 3, 7, 8, 5, 6]
    // elementos mayores = [4, 3, 8, 6] (los elementos en las posiciones pares)
    // elementos menores = [2, 1, 7, 5] (los elementos en las posiciones impares)
    std::deque<int> eventElements, oddElements;
    for (size_t i = 0; i < data.size(); i++) {
        if (i % 2 == 0) {
            eventElements.push_back(data[i]);
        } else {
            oddElements.push_back(data[i]);
        }
    }

    // Paso 3: Ordenar recursivamente la lista de elementos mayores
    // eventElements se ordena a [3, 4, 6, 8]
    // oddElements se ordena a [1, 2, 5, 7]
    mergeInsertSort(eventElements);
    mergeInsertSort(oddElements);
    
    // Paso 4: Mezclar las dos listas ordenadas
    // Mezclamos los elementos de eventElements y oddElements en un nuevo deque
    // result = [1, 2, 3, 4, 5, 6, 7, 8]
    std::deque<int> result;
    std::deque<int>::iterator it1 = eventElements.begin();
    std::deque<int>::iterator it2 = oddElements.begin();
    while (it1 != eventElements.end() && it2 != oddElements.end()) {
        if (*it1 < *it2) {
            result.push_back(*it1);
            it1++;
        } else {
            result.push_back(*it2);
            it2++;
        }
    }
    

    // Paso 5: Agrupar elementos restantes si event o odd tiene más elementos (pj: 3 y 4 elemntos en cada uno)
    // Agregamos los elementos restantes de eventElements y oddElements al final de result
    // result = [1, 2, 3, 4, 5, 6, 7, 8]
    while (it1 != eventElements.end()) {
        result.push_back(*it1);
        it1++;
    }
    while (it2 != oddElements.end()) {
        result.push_back(*it2);
        it2++;
    }

    // Actualizar el deque original con el resultado ordenado
    data = result;
}

// funcion para medir el tiempo de ordenar una secuencia para vector
double PmergeMe::getTimeSort(std::vector<int> &data)
{
    struct timeval start, end;
    std::vector<int> copy(data);
    gettimeofday(&start, NULL);
    mergeInsertSort(copy);
    gettimeofday(&end, NULL);
    return (end.tv_usec - start.tv_usec);
    
}

// funcion para medir el tiempo de ordenar una secuencia para list
double PmergeMe::getTimeSort(std::deque<int> &data)
{
    struct timeval start, end;
    std::deque<int> copy(data);
    gettimeofday(&start, NULL);
    mergeInsertSort(copy);
    gettimeofday(&end, NULL);
    return (end.tv_usec - start.tv_usec);
}
