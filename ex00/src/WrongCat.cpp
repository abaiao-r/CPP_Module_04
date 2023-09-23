/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:53:13 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 13:24:33 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << ORANGE << "WrongCat Default constructor called" << RESET 
        << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << ORANGE << "WrongCat Copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

WrongCat::~WrongCat(void)
{
    std::cout << RED << "WrongCat Destructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << ORANGE << "WrongCat Assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << MAGENTA << "Meow Meow" << RESET << std::endl;
}





    
