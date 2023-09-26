/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:44:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/26 16:44:06 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << BLUE << "Cat Default constructor called" << RESET 
        << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << BLUE << "Cat Copy constructor called" << RESET 
        << std::endl;
    this->brain = NULL;
    *this = src;
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << BLUE << "Cat Assignment operator called" << RESET 
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

void Cat::makeSound(void) const
{
    std::cout << MAGENTA << "Meow Meow" << RESET << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->brain);
}
