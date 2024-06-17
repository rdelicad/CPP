/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:03:16 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/17 19:16:35 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN
{
    public:
        RPN();
        RPN(std::string str);
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);

        void calculateRPN();
    
    private:    
        std::string rpn;
        std::string res;
        //std::stack<char> stack;
};

#endif