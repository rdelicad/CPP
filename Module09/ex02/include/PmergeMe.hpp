/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:05:27 by rdelicad          #+#    #+#             */
/*   Updated: 2024/07/03 16:19:16 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <iterator>
# include <deque>
# include <cstdlib>
# include <climits>
# include <sstream>
# include <cstring>
# include <sys/time.h>
# include <iomanip>

class PmergeMe
{
    private:
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &other);
        
        // Para vector
        void sortPair(std::vector<int> &data, size_t i, size_t j);
        size_t searchPosition(const std::vector<int> &data, int target, size_t left, size_t right);
        void insert(std::vector<int> &data, size_t sortedSize, int element);

        // Para deque
        void sortPair(std::deque<int> &data, size_t i, size_t j);
        size_t searchPosition(const std::deque<int> &data, int target, size_t left, size_t right);
        void insert(std::deque<int> &data, size_t sortedSize, int element);

    public:
        PmergeMe();
        ~PmergeMe();
        
        // implementa el algoritmo Ford-Johnson
        void mergeInsertSort(std::vector<int> &data);
        void mergeInsertSort(std::deque<int> &data);

        // imprime la secuencia
        void print(const std::vector<int> &data) const;
        void print(const std::deque<int> &data) const;

        // devuelve el tiempo para ordenar la secuencia
        double getTimeSort(std::vector<int> &data);
        double getTimeSort(std::deque<int> &data);
        
};

#endif
