/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:39:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 22:26:19 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << BLUE << "Dog Default constructor called" << RESET 
        << std::endl;
}

Dog::Dog(Dog const &src)
{
    *this = src;
    this->brain = new Brain();
    std::cout << BLUE << "Dog Copy constructor called" << RESET 
        << std::endl;
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
        this->type = src.type;
        *(this->brain) = *(src.brain);
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
