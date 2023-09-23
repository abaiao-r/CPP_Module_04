/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:27:21 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 18:49:49 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << BLUE << "AAnimal Default constructor called" << RESET 
        << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << BLUE << "AAnimal Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

AAnimal::~AAnimal(void)
{
    std::cout << RED << "AAnimal Destructor called" << RESET << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    std::cout << BLUE << "AAnimal Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void AAnimal::makeSound(void) const
{
    std::cout << MAGENTA << "AAnimal Sound" << RESET << std::endl;
}

