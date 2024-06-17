/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:41:06 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/17 19:23:39 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN() : rpn(""), res("")
{
} 

RPN::RPN(std::string str) : rpn(str), res("")
{
}

RPN::RPN(const RPN &copy) : rpn(copy.rpn), res(copy.res)
{
}

RPN::~RPN()
{
}
RPN &RPN::operator=(const RPN &copy)
{
    if (this != &copy)
    {
        this->rpn = copy.rpn;
        this->res = copy.res;
    }
    return (*this);
} 

void RPN::calculateRPN()
{
    std::stack<int> stack;
    int i = 0;
    while (this->rpn[i])
    {
        if (this->rpn[i] >= '0' && this->rpn[i] <= '9')
        {
            stack.push(this->rpn[i] - '0');
        }
        else
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (this->rpn[i])
            {
                case '+':
                    stack.push(b + a);
                    break;
                case '-':
                    stack.push(b - a);
                    break;
                case '*':
                    stack.push(b * a);
                    break;
                case '/':
                    if (a == 0)
                    {
                        std::cout << "Error: division by zero" << std::endl;
                        return;
                    }
                    stack.push(b / a);
                    break;
                default:
                    std::cout << "Error: Operator desconocido." << std::endl;
                    return;
            }
        }
        i++;
    }
    
    std::stringstream ss;
    ss << stack.top();
    this->res = ss.str();
    std::cout << this->res << std::endl;
}