/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:44:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:37 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << BLUE << "Cat Default constructor called" << RESET 
        << std::endl;
}

Cat::Cat(Cat const &src)
{
    std::cout << BLUE << "Cat Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << BLUE << "Cat Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << MAGENTA << "Meow Meow" << RESET << std::endl;
}
