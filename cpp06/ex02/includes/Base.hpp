/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 19:05:43 by marvin            #+#    #+#             */
/*   Updated: 2025/12/06 19:05:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib> 
#include <ctime>
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif