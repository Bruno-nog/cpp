/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:27:34 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/10 17:56:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"


void test_vector()
{
	std::vector<int> v;
	for (int i = 0; i < 5; ++i)
		v.push_back(i * 10);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 20);
		std::cout << "Vector: found " << *it << std::endl;
		easyfind(v, 99);
	} catch (const std::exception &e){
		std::cout << "Vector: " << e.what() << std::endl;
	}
}

void test_list()
{
    std::list<int> l;
    l.push_back(42);
    l.push_back(7);
    try {
        std::list<int>::iterator it = easyfind(l, 42);
        std::cout << "list: found " << *it << '\n';
    } catch (const std::exception &e) {
        std::cout << "list: " << e.what() << '\n';
    }
}

void test_deque_const()
{
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    const std::deque<int> cd = d;
    try {
        std::deque<int>::const_iterator it = easyfind(cd, 2);
        std::cout << "const deque: found " << *it << '\n';
    } catch (const std::exception &e) {
        std::cout << "const deque: " << e.what() << '\n';
    }
}

int main ()
{
	test_vector();
	test_list();
	test_deque_const();
	return 0;
}