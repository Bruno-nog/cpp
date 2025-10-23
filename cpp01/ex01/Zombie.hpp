/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:47:41 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/23 20:06:23 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

// class Zombie
// {
// 	private:
// 		std::string name;

// 	public:
// 		Zombie(std::string name);
// 		~Zombie();
// 		void announce(void);
// 		void SetName(const std::string& NewName);
// };
// Zombie* zombieHorde(int N, std::string name);

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce(void);
		void SetName(const std::string& NewName);

	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif