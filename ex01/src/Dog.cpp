/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:39:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 13:23:03 by andrefranci      ###   ########.fr       */
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

Dog::Dog(Dog const &src) : Animal(src)
{
    *this = src;
    this->brain = new Brain(*(src.brain));
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
        delete this->brain;
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
