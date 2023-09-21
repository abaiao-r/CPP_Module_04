/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:49:54 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:55 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << YELLOW << "WrongAnimal Default constructor called" << RESET 
        << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << YELLOW << "WrongAnimal Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << RED << "WrongAnimal Destructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << YELLOW << "WrongAnimal Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << MAGENTA << "AHAHAHAH" << RESET << std::endl;
}
