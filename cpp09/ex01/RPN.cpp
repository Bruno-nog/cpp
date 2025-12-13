/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:55:43 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/13 19:18:47 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN::RPN& operator=(const RPN& other)
{
	if (this != &other)
		this->_stack = other._stack;
	return (*this);
}

RPN::~RPN() {}

RPN::int evaluate(const std::string& exoression);