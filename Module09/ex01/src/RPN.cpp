/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:41:06 by rdelicad          #+#    #+#             */
/*   Updated: 2024/06/17 17:57:28 by rdelicad         ###   ########.fr       */
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

void RPN::setRPN(std::string str)
{
    this->rpn = str;
}

std::string RPN::getRPN() const
{
    return (this->rpn);
}

void RPN::setRes(std::string str)
{
    this->res = str;
}

std::string RPN::getRes() const
{
    return (this->res);
}

void RPN::calculateRPN()
{
    // meter RPN en stack
    std::stack<int> stack;
    int i = 0;
    while (this->rpn[i])
    {
        if (this->rpn[i] >= '0' && this->rpn[i] <= '9')
        {
            stack.push(this->rpn[i] - '0');
        }
        else if (this->rpn[i] == '+')
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            stack.push(a + b);
        }
        else if (this->rpn[i] == '-')
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            stack.push(a - b);
        }
        else if (this->rpn[i] == '*')
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            stack.push(a * b);
        }
        else if (this->rpn[i] == '/')
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            stack.push(a / b);
        }
        i++;
    }
    
}