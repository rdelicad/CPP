/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:05:27 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/18 18:58:25 by rdelicad         ###   ########.fr       */
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

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();

        void sort(std::vector<int> &data);
        void sort(std::list<int> &data);
        
    private:
        
};

#endif
