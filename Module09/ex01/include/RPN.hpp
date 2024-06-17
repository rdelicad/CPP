/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:03:16 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/17 17:54:54 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
    public:
        RPN();
        RPN(std::string str);
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &copy);

        void setRPN(std::string str);
        std::string getRPN() const;
        void setRes(std::string str);
        std::string getRes() const;

        void calculateRPN();
    
    private:    
        std::string rpn;
        std::string res;
        //std::stack<char> stack;
};

#endif