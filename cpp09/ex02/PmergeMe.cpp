/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 22:16:59 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/14 14:53:52 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdexcept>
#include <set>
#include <sstream>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other) {
        this->_inputVector = other._inputVector;
        this->_inputDeque = other._inputDeque;
    }
    return *this;
}

void PmergeMe::processInput(int ac, char **av)
{
    std::set<int> numbers;

    for (int i = 1; i < ac; ++i)
    {
        std::string input = av[i];
        std::istringstream iss(input);
        int value;

        iss >> value;
        if (iss.fail() || !iss.eof() || value < 0)
            throw std::runtime_error("Error");
        if (numbers.count(value) == 1)
            throw std::runtime_error("duplicated value: " + input);

        numbers.insert(value);
        this->_inputVector.push_back(value);
        this->_inputDeque.push_back(value);
    }
}

void PmergeMe::sortVector()
{
    std::cout << "Before:\t";
    printContainer(this->_inputVector);

    std::clock_t start = std::clock();
    std::vector<int> sorted = fordJohnsonSort<std::vector<int> >(this->_inputVector);
    std::clock_t finish = std::clock();

    if (!isSortedContainer<std::vector<int> >(sorted))
        throw std::runtime_error("sorting vector failed");

    std::cout << "After:\t";
    printContainer(sorted);

    double elapsedTime = static_cast<double>(finish - start) * 1000000.0 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _inputVector.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

void PmergeMe::sortDeque(void)
{
    std::clock_t start = std::clock();
    std::deque<int> sorted = fordJohnsonSort<std::deque<int> >(_inputDeque);
    std::clock_t finish = std::clock();

    if (!isSortedContainer<std::deque<int> >(sorted))
        throw std::runtime_error("sorting deque failed");

    double elapsedTime = static_cast<double>(finish - start) * 1000000.0 / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _inputDeque.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

std::vector<int> generateInsertionOrder(size_t n)
{
    std::vector<int> seq;
    std::set<int> usedIndices;

    for (int j = 2; seq.size() < n; ++j)
    {
        int num = jacobsthalNumber(j);
        if (num > static_cast<int>(n))
            num = static_cast<int>(n);
        while (num > 0 && !usedIndices.count(num))
        {
            seq.push_back(num);
            usedIndices.insert(num);
            --num;
        }
    }
    return seq;
}

int jacobsthalNumber(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return jacobsthalNumber(n - 1) + 2 * jacobsthalNumber(n - 2);
}
