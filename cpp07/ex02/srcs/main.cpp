/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:54:57 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/07 16:58:09 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"

int main() {
    try {
        std::cout << "Testing constructor with size 5:\n";
        Array<int> a(5);

        for (unsigned int i = 0; i < a.size(); ++i)
            a[i] = i * 10;

        for (unsigned int i = 0; i < a.size(); ++i)
            std::cout << "a[" << i << "] = " << a[i] << "\n";

        std::cout << "\nTesting copy constructor:\n";
        Array<int> b(a);

        b[0] = 999;

        std::cout << "a[0] = " << a[0] << "  (should still be 0)\n";
        std::cout << "b[0] = " << b[0] << "  (copy changed)\n";

        std::cout << "\nTesting assignment operator:\n";
        Array<int> c;
        c = a;

        c[1] = 777;

        std::cout << "a[1] = " << a[1] << "  (should still be 10)\n";
        std::cout << "c[1] = " << c[1] << "\n";

        std::cout << "\nTesting empty array:\n";
        Array<std::string> s;
        std::cout << "s.size() = " << s.size() << "\n";

        std::cout << "\nTesting exception (should throw):\n";
        std::cout << a[100] << "\n";

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
