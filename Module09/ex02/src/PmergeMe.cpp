/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:32:43 by lxuxer            #+#    #+#             */
/*   Updated: 2024/06/19 21:24:49 by lxuxer           ###   ########.fr       */
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