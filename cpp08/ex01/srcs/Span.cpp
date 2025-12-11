/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:12:31 by marvin            #+#    #+#             */
/*   Updated: 2025/12/10 19:12:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

const char *Span::SpanFullException::what() const throw()
{
    return "Span: container is full";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
    return "Span: not enough numbers to find a span";
}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &other) : _N(other._N), _nums(other._nums) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
        _nums = other._nums;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value)
{
    if (_nums.size() >= _N)
        throw SpanFullException();
    _nums.push_back(value);
}

int Span::shortestSpan() const
{
    if (_nums.size() < 2)
        throw NotEnoughNumbersException();

    std::vector<int> temp = _nums;
    std::sort(temp.begin(), temp.end());
    int minSpan = std::numeric_limits<int>::max();
    for (std::vector<int>::size_type i = 1; i < temp.size(); ++i)
    {
        int span = temp[i] - temp[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (_nums.size() < 2)
        throw NotEnoughNumbersException();

    std::vector<int>::const_iterator itMin = std::min_element(_nums.begin(), _nums.end());
    std::vector<int>::const_iterator itMax = std::max_element(_nums.begin(), _nums.end());

    return (*itMax) - (*itMin);
}


unsigned int Span::capacity() const
{
    return _N;
}


unsigned int Span::size() const
{
    return static_cast<unsigned int>(_nums.size());
}