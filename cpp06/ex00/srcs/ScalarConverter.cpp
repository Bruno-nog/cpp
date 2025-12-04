/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:31:53 by marvin            #+#    #+#             */
/*   Updated: 2025/12/04 17:31:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <cmath>
#include <limits>
#include <cctype>



void ScalarConverter::converter(const std::string &literal)
{
    if (isCharLiteral(literal))
    {
        char c;
        if (literal.size() == 1 )
            c = literal[0];
        else
            c = literal[1];
        printAllFromDouble(static_cast<double>(c));
        return;
    }

    if (isIntLiteral(literal))
    {
        long v = std::strtol(literal.c_str(), NULL, 10);
        printAllFromDouble(static_cast<double>(v));
        return;
    }
    
    if (isFloatLiteral(literal))
    {
        float f = std::strtof(literal.c_str(), NULL);
        printAllFromDouble(static_cast<double>(f));
        return;
    }

    if (isDoubleLiteral(literal))
    {
        double d = std::strtod(literal.c_str(), NULL);
        printAllFromDouble(d);
        return;
    }

    std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
}
