/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:21:23 by marvin            #+#    #+#             */
/*   Updated: 2025/11/05 09:21:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor called: " << this->type << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called: " << this->type << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong meow..." << std::endl;
}
