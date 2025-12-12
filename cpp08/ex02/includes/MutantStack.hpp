/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:39:48 by marvin            #+#    #+#             */
/*   Updated: 2025/12/11 17:39:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    // Iterator typedefs
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    // Orthodox Canonical Form
    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);
    ~MutantStack();

    // Iterators
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif
