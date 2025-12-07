/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 02:29:54 by marvin            #+#    #+#             */
/*   Updated: 2025/12/07 17:50:27 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/iter.hpp"

void printString(const std::string &str)
{
    std::cout << str << std::endl;
}

void increment(int &n)
{
    n++;
}

void printInt(int &n)
{
    std::cout << n << std::endl;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    std::size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before iter:" << std::endl;
    iter(arr, len, printInt);

    iter(arr, len, increment);

    std::cout << "After iter:" << std::endl;

    iter(arr, len, printInt);

    const std::string strs[] = {"Hello", "World", "from", "iter"};
    std::size_t strlen = sizeof(strs) / sizeof(strs[0]);

    std::cout << "String array:" << std::endl;
    iter(strs, strlen, printString);

    return 0;
}