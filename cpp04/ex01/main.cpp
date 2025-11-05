/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:03:57 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/05 15:50:46 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;
// 	delete i;
// 	return 0;
// }

int main()
{
    const int N = 6;
    Animal* zoo[N];

    std::cout << "=== Creating zoo ===" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        if (i < N / 2)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
    }

    std::cout << "\n=== makeSound() for all animals ===" << std::endl;
    for (int i = 0; i < N; ++i)
        zoo[i]->makeSound();

    std::cout << "\n=== Deep copy test (Dog) ===" << std::endl;
    Dog basicDog;
    {
        Dog tmpDog = basicDog; // chama construtor de cópia
        std::cout << "Temporary Dog copy created and destroyed.\n";
    }

    std::cout << "\n=== Deep copy test (Cat) ===" << std::endl;
    Cat basicCat;
    {
        Cat tmpCat = basicCat; // chama construtor de cópia
        std::cout << "Temporary Cat copy created and destroyed.\n";
    }

    std::cout << "\n=== Deleting zoo ===" << std::endl;
    for (int i = 0; i < N; ++i)
        delete zoo[i];

    std::cout << "\n=== Done ===" << std::endl;
    return 0;
}
