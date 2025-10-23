/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:12:33 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/23 19:18:12 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string Name;
	
	public:
		Zombie(std::string Name);
		~Zombie();
		void announce(void);
};

void	randomChump(std::string name);
Zombie* newZombie(std::string Name);

#endif