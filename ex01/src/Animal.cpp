/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:27:21 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 20:56:13 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
    std::cout << BLUE << "Animal Default constructor called" << RESET 
        << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << BLUE << "Animal Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

Animal::~Animal(void)
{
    std::cout << RED << "Animal Destructor called" << RESET << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << BLUE << "Animal Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << MAGENTA << "Animal Sound" << RESET << std::endl;
}

