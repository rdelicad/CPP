/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxuxer <lxuxer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:05:27 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/19 21:24:40 by lxuxer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <iterator>
# include <list>
# include <cstdlib>
# include <climits>
# include <ctime>

class PmergeMe
{
    private:
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &other);

    public:
        PmergeMe();
        ~PmergeMe();
        
        // implementa el algoritmo Ford-Johnson
        void mergeInsertSort(std::vector<int> &data);
        void mergeInsertSort(std::list<int> &data);

        // imprime la secuencia
        void print(const std::vector<int> &data) const;
        void print(const std::list<int> &data) const;

        // devuelve el tiempo para ordenar la secuencia
        double getTimeSort(std::vector<int> &data);
        double getTimeSort(std::list<int> &data);
        
};

#endif
