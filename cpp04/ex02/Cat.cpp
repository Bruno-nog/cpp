/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:01:27 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/05 14:50:20 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Constructor called: " << this->type << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor called: " << this->type << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat Copy constructor called: " << this->type << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}
