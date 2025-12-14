/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 22:17:02 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/13 23:29:24 by brunogue         ###   ########.fr       */
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
		std::vector<int> _vec;
		std::deque<int> _deq;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
		void sortVector();
		void sortDeque();
		void processInput(int argc, char** argv);
};

std::vector<int> generateInsertion(size_t n);
int jacobSthal(int n);

template <typename T>
void binaryInsert(T& sorted, T &pend)
{
	std::vector<int> insertionSeq = generateInsertion(pend.size());
	
	for (size_t i = 0; i < insertionSeq.size(); i++)
	{
		size_t index = insertionSeq[i] - 1;
		if (index >= pend.size())
			continue;
		int elem = pend[index];
		typename T::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), elem);
		sorted.insert(pos, elem);
	}
}

template <typename C>
C insertMergeSort(C input)
{
	if (input.size() <= 1)
		return (input);
	int leftoverElem = -1;
	if (input.size() % 2 == 1) {
		leftoverElem = input.back();
		input.pop_back();
	}

	C smaller, larger;
	for (size_t i = 0; i < input.size(); i += 2) {
		int first = input[i];
		int second = input[i + 1];
		if (first > second)
			std::swap(first, second);
		smaller.push_back(first);
		larger.push_back(second);
	}
	if (leftoverElem != -1)
		smaller.push_back(leftoverElem);

	C sorted = insertMergeSort<C>(larger);
	binaryInsert(sorted, smaller);
	return (sorted);
}

template <typename T>
bool isSorted(const T &container)
{
	if (container.size() < 2)
		return (true);
	typename T::const_iterator it = container.begin();
	typename T::const_iterator next = it;
	++next;

	while (next != container.end())
	{
		if (*it > *next)
			return(false);
		++it;
		++next;
	}
	return (true);
}

template <typename T>
void printContainer(const T container)
{
	typename T::const_iterator it = container.begin();

	while (it != container.end())
	{
		std::cout << " " << *it;
		++it;
	}
	std::cout << std::endl;
}

#endif