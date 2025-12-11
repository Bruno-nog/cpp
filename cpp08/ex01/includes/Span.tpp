/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:19:50 by marvin            #+#    #+#             */
/*   Updated: 2025/12/10 19:19:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename InputIt>
void Span::addNumber(InputIt first, InputIt last)
{
    typename std::iterator_traits<InputIt>::difference_type dist = std::distance(first, last);
    if (dist < 0)
        dist = 0;
    unsigned long needed = static_cast<unsigned long>(dist);
    if (_nums.size() + needed > _N)
        throw Span::SpanFullException();
    _nums.insert(_nums.end(), first, last);
}