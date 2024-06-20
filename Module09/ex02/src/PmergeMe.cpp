/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:32:43 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/20 20:05:47 by lxuxer           ###   ########.fr       */
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

void PmergeMe::print(const std::list<int> &data) const
{
    int count = 0;
    std::list<int>::const_iterator it = data.begin();
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

// funcion para fusionar dos sub-secuencias ordenadas para vector
static void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &data)
{
    std::vector<int>::iterator itLeft = left.begin();
    std::vector<int>::iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            data.push_back(*itLeft);
            itLeft++;
        }
        else
        {
            data.push_back(*itRight);
            itRight++;
        }
    }

    while (itLeft != left.end())
    {
        data.push_back(*itLeft);
        itLeft++;
    }

    while (itRight != right.end())
    {
        data.push_back(*itRight);
        itRight++;
    }
}

// Implementacion del Ford-Johnson para vector
void PmergeMe::mergeInsertSort(std::vector<int> &data)
{
    if (data.size() < 2)
        return;

    std::vector<int> left(data.begin(), data.begin() + data.size() / 2);
    std::vector<int> right(data.begin() + data.size() / 2, data.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    data.clear();
    merge(left, right, data);
}

// funcion para fusionar dos sub-secuencias ordenadas para list
static void merge(std::list<int> &left, std::list<int> &right, std::list<int> &data)
{
    std::list<int>::iterator itLeft = left.begin();
    std::list<int>::iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            data.push_back(*itLeft);
            itLeft++;
        }
        else
        {
            data.push_back(*itRight);
            itRight++;
        }
    }

    while (itLeft != left.end())
    {
        data.push_back(*itLeft);
        itLeft++;
    }

    while (itRight != right.end())
    {
        data.push_back(*itRight);
        itRight++;
    }
}

// Implementacion del Ford-Johnson para list
void PmergeMe::mergeInsertSort(std::list<int> &data)
{
    if (data.size() < 2)
        return;

    std::list<int>::iterator middle = data.begin();
    std::advance(middle, data.size() / 2);
    std::list<int> left(data.begin(), middle);
    std::list<int> right(middle, data.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    data.clear();
    merge(left, right, data);
}

// funcion para medir el tiempo de ordenar una secuencia para vector
double PmergeMe::getTimeSort(std::vector<int> &data)
{
    std::vector<int> copy(data);
    clock_t start = clock();
    mergeInsertSort(copy);
    clock_t end = clock();
    return (end - start) / (double)CLOCKS_PER_SEC * 1000000.0;
}

// funcion para medir el tiempo de ordenar una secuencia para list
double PmergeMe::getTimeSort(std::list<int> &data)
{
    std::list<int> copy(data);
    clock_t start = clock();
    mergeInsertSort(copy);
    clock_t end = clock();
    return (end - start) / (double)CLOCKS_PER_SEC * 1000000.0;
}
