/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:10:54 by marvin            #+#    #+#             */
/*   Updated: 2025/12/10 18:10:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    

    std::cout << "----- bigger test -----" << std::endl;
    {
    const unsigned int COUNT = 10000;
    Span big(COUNT);
    std::vector<int> numbers;
    numbers.reserve(COUNT);
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    for (unsigned int i = 0; i < COUNT; ++i)
    numbers.push_back(std::rand() % 1000000 - 500000);


    try {
    big.addNumber(numbers.begin(), numbers.end());
    std::cout << "size: " << big.size() << " / capacity: " << big.capacity() << std::endl;
    std::cout << "shortestSpan: " << big.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << big.longestSpan() << std::endl;
    } catch (const std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
    }
    }
    return 0;
}