/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:54:53 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 20:54:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(const std::string &name);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
};

#endif