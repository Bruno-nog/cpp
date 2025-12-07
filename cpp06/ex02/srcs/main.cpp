/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 19:03:48 by marvin            #+#    #+#             */
/*   Updated: 2025/12/06 19:03:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Base.hpp"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    for (int i = 0; i < 10; ++i)
    {
        Base *obj = generate();

        std::cout << "Identify(Base *): ";
        identify(*obj);

        delete obj;
        std::cout << "---\n";
    }
    return 0;
}