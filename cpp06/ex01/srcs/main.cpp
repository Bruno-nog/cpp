/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:19:47 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/07 00:54:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Data.hpp"
#include "../includes/Serializer.hpp"

int main()
{
    Data d;
    d.name = "Bruno";
    d.age = 20;

    Data* originalPtr = &d;
    std::cout << "Original pointer: " << originalPtr << std::endl;
    std::cout << "Original contents: name=" << originalPtr->name << ", age=" << originalPtr->age << std::endl;

    uintptr_t raw = Serializer::serialize(originalPtr);
    std::cout << "Serialized (uintptr_t): " << raw << std::endl;

    Data* recoveredPtr = Serializer::deserialize(raw);
    std::cout << "Recovered pointer: " << recoveredPtr << std::endl;
    std::cout << "Recovered contents: name=" << recoveredPtr->name << ", age=" << recoveredPtr->age << std::endl;

    if (recoveredPtr == originalPtr)
        std::cout << "Success: pointers are equal." << std::endl;
    else
        std::cout << "Error: pointers differ." << std::endl;

    return 0;
}