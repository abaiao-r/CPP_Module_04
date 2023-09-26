/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:39:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/26 16:43:27 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << BLUE << "Dog Default constructor called" << RESET 
        << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << BLUE << "Dog Copy constructor called" << RESET 
        << std::endl;
    this->brain = NULL;
    *this = src;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << BLUE << "Dog Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
    {
        if(this->brain)
            delete this->brain;
        this->type = src.type;
        this->brain = new Brain(*(src.brain));
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << MAGENTA << "Woof Woof" << RESET << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return(this->brain);
}
