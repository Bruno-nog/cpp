/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:58:55 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/23 19:59:09 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];   // usa construtor padrão para cada elemento
    for (int i = 0; i < N; ++i)
    {
        Horde[i].SetName(name);
    }
    return Horde;
}


// Zombie* zombieHorde(int N, std::string name)
// {
// 	Zombie *Horde = new Zombie(name);
// 	for(int i = 0; i < N; i++)
// 	{
// 		Horde[i].SetName(name);
// 	}
// 	return Horde;
// }
