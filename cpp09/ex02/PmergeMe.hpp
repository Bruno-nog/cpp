/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 22:17:02 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/14 15:49:39 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <ctime>
#include <iomanip>
#include <stdexcept>
#include <sstream>

class PmergeMe
{   
    private:
        std::vector<int> _inputVector;
        std::deque<int>  _inputDeque;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();
        void sortVector();
        void sortDeque();
        void processInput(int argc, char** argv);
};

std::vector<int> generateInsertionOrder(size_t n);
int jacobsthalNumber(int n);

template <typename T>
void insertPendantsBinary(T& mainChain, const T &pendants)
{
    std::vector<int> insertionOrder = generateInsertionOrder(pendants.size());

    for (size_t i = 0; i < insertionOrder.size(); ++i)
    {
        int rawIndex = insertionOrder[i];
        if (rawIndex <= 0)
            continue;
        size_t index = static_cast<size_t>(rawIndex - 1);
        if (index >= pendants.size())
            continue;
        int valueToInsert = pendants[index];
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), valueToInsert);
        mainChain.insert(pos, valueToInsert);
    }
}

template <typename Container>
Container fordJohnsonSort(Container sequence)
{
    if (sequence.size() <= 1)
        return sequence;

    int leftoverValue = -1;
    if (sequence.size() % 2 == 1)
    {
        leftoverValue = sequence.back();
        sequence.pop_back();
    }
    Container losers;
    Container winners;
    for (size_t i = 0; i < sequence.size(); i += 2)
    {
        int a = sequence[i];
        int b = sequence[i + 1];
        if (a > b)
            std::swap(a, b);
        losers.push_back(a);
        winners.push_back(b);
    }
    if (leftoverValue != -1)
        losers.push_back(leftoverValue);

    Container sortedMain = fordJohnsonSort<Container>(winners);
    insertPendantsBinary(sortedMain, losers);
    return sortedMain;
}

template <typename T>
bool isSortedContainer(const T &container)
{
    if (container.size() < 2)
        return true;
    typename T::const_iterator it = container.begin();
    typename T::const_iterator next = it;
    ++next;

    while (next != container.end())
    {
        if (*it > *next)
            return false;
        ++it;
        ++next;
    }
    return true;
}

template <typename T>
void printContainer(const T& container)
{
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
    {
        std::cout << " " << *it;
    }
    std::cout << std::endl;
}

#endif

