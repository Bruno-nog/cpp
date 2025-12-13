/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:22:11 by marvin            #+#    #+#             */
/*   Updated: 2025/12/10 19:22:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <limits>
#include <ctime>

class Span
{
    public:
        explicit Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int value);

        template <typename InputIt>
        void addNumber(InputIt first, InputIt last);

        int shortestSpan() const;
        int longestSpan() const;

        unsigned int capacity() const;
        unsigned int size() const;

        class SpanFullException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class NotEnoughNumbersException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    private:
        unsigned int _N;
        std::vector<int> _nums;
};

#include "Span.tpp"

#endif