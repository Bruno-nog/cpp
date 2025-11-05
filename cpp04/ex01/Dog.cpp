/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:09:51 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/05 14:41:29 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Constructor called: " << this->type << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructor called: " << this->type << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog Copy constructor called: " << this->type << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}
