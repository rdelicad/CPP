/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:32:43 by lxuxer            #+#    #+#             */
/*   Updated: 2024/07/03 15:53:16 by rdelicad         ###   ########.fr       */
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

void PmergeMe::sortPair(std::deque<int> &data, size_t i, size_t j)
{
    if (data[i] > data[j]) {
        std::swap(data[i], data[j]);
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

size_t PmergeMe::searchPosition(const std::deque<int> &data, int target, size_t left, size_t right)
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

void PmergeMe::insert(std::vector<int> &data, size_t sortedSize, int element)
{
    size_t i = searchPosition(data, element, 0, sortedSize);
    data.insert(data.begin() + i, element);
}

void PmergeMe::insert(std::deque<int> &data, size_t sortedSize, int element)
{
    size_t i = searchPosition(data, element, 0, sortedSize);
    data.insert(data.begin() + i, element);
}

void PmergeMe::mergeInsertSort(std::vector<int> &data)
{
    // Si la lista tiene 0 o 1 elementos, ya está ordenada
    if (data.size() <= 1) return;
    
    // Paso 1: Agrupar en pares y ordena cada par
    for (size_t i = 0; i < data.size() - 1; i += 2) {
            sortPair(data, i, i + 1);
    }

    // Paso 2: Crear una nueva lista con los elementos mayores de cada par
    std::vector<int> largerElements;
    for (size_t i = 1; i < data.size(); i += 2) {
        largerElements.push_back(data[i]);
    }

    // Paso 3: Ordenar recursivamente la lista de elementos mayores
    mergeInsertSort(largerElements);

    // Paso 4: Reconstruir la lista ordenada 
    std::vector<int> result = largerElements;

    // Paso 5: Insertar los elementos menores 
    for (size_t i = 0; i < data.size(); i += 2) {
        insert(result, result.size(), data[i]);
    }

    // Actualizar el vector original con el resultado ordenado
    data = result;
}

void PmergeMe::mergeInsertSort(std::deque<int> &data)
{
    // Si la lista tiene 0 o 1 elementos, ya está ordenada
    if (data.size() <= 1) return;

    // Paso 1: Agrupar en pares y ordena cada par
    for (size_t i = 0; i < data.size() - 1; i += 2) {
        sortPair(data, i, i + 1);
    }

    // Paso 2: Crear una nueva lista con los elementos mayores de cada par
    std::deque<int> largerElements;
    for (size_t i = 1; i < data.size(); i += 2) {
        largerElements.push_back(data[i]);
    }

    // Paso 3: Ordenar recursivamente la lista de elementos mayores
    mergeInsertSort(largerElements);

    // Paso 4: Reconstruir la lista ordenada 
    std::deque<int> result = largerElements;

    // Paso 5: Insertar los elementos menores 
    for (size_t i = 0; i < data.size(); i += 2) {
        insert(result, result.size(), data[i]);
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
