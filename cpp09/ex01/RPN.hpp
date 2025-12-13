/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:55:45 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/13 20:20:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>

class RPN
{
	private:
		std::stack<int>_stack;
		bool isOperator(const std::string &token) const;
		int applyOperation(const std::string &op, int a, int b) const;
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();
		int evaluate(const std::string& exoression);

};

#endif