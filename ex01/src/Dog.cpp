/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:39:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:41 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << BLUE << "Dog Default constructor called" << RESET 
        << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << BLUE << "Dog Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << BLUE << "Dog Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << MAGENTA << "Woof Woof" << RESET << std::endl;
}
