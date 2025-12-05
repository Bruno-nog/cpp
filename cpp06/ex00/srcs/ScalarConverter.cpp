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

static bool isCharLiteral(const std::string &s)
{
    if (s.size() == 1
        && std::isprint(static_cast<unsigned char>(s[0]))
        && !std::isdigit(static_cast<unsigned char>(s[0])))
        return true;

    if (s.size() == 3 && s[0] == '\'' && s[2] == '\'')
        return true;

    return false;
}

static bool isIntLiteral(const std::string &s)
{
    if (s.empty())
        return false;

    char *end = NULL;
    errno = 0;
    std::strtol(s.c_str(), &end, 10);

    bool result = false;
    if (errno == ERANGE)
        result = false;
    else if (*end != '\0')
        result = false;
    else
        result = true;

    return result;
}

static bool isFloatLiteral(const std::string &s)
{
    if (s == "nanf" || s == "+inff" || s == "-inff")
        return true;

    if (s.size() < 2)
        return false;

    char *end = NULL;
    errno = 0;
    std::strtof(s.c_str(), &end);

    bool result = false;
    if (*end == 'f' && *(end + 1) == '\0')
        result = true;
    else
        result = false;

    return result;
}

static bool isDoubleLiteral(const std::string &s)
{
    if (s == "nan" || s == "+inf" || s == "-inf")
        return true;

    char *end = NULL;
    errno = 0;
    std::strtod(s.c_str(), &end);

    bool result = false;
    if (*end == '\0' && s.size() > 0)
        result = true;
    else
        result = false;

    return result;
}

static void printAllFromDouble(double d)
{
    std::cout << "char: ";
    if (std::isnan(d) || std::isinf(d) || d < 0.0 || d > 127.0)
    {
        std::cout << "impossible\n";
    }
    else
    {
        char c = static_cast<char>(d);
        if (!std::isprint(static_cast<unsigned char>(c)))
            std::cout << "Non displayable\n";
        else
            std::cout << "'" << c << "'\n";
    }

        std::cout << "int: ";
    if (std::isnan(d) || std::isinf(d) ||
        d < static_cast<double>(std::numeric_limits<int>::min()) ||
        d > static_cast<double>(std::numeric_limits<int>::max()))
    {
        std::cout << "impossible\n";
    }
    else
    {
        int i = static_cast<int>(d);
        std::cout << i << "\n";
    }

    std::cout << "float: ";
    if (std::isnan(d))
    {
        std::cout << "nanf\n";
    }
    else if (std::isinf(d))
    {
        if (d > 0) std::cout << "+inff\n"; else std::cout << "-inff\n";
    }
    else
    {
        float f = static_cast<float>(d);
        std::cout << std::fixed << std::setprecision(1) << f << "f\n";
        std::cout.unsetf(std::ios::fixed);
    }

    std::cout << "double: ";
    if (std::isnan(d))
    {
        std::cout << "nan\n";
    }
    else if (std::isinf(d))
    {
        if (d > 0) std::cout << "+inf\n"; else std::cout << "-inf\n";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << d << "\n";
        std::cout.unsetf(std::ios::fixed);
    }
}

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
