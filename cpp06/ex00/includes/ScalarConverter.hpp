/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:41:14 by marvin            #+#    #+#             */
/*   Updated: 2025/12/04 16:41:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter
{
    public:
        static void converter(const std::string &literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter &operator=(const ScalarConverter &);

        static bool isPseudoLiteral(const std::string &s);
        static bool isCharLiteral(const std::string &s);
        static bool isInrLiteral(const std::string &s);
        static bool isFloatLiteral(const std::string &s);
        static bool isDoubleLiteral(const std::string &s);

        static void printFromChar(char c);
        static void printFromInt(long value, bool overflow);
        static void printFromFloat(double value);
        static void printFromDouble(double value);
}

#endif