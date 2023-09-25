/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:47:51 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 17:42:37 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

/* Default Constructor */
Cure::Cure() : AMateria("cure")
{
    std::cout << BOLDYELLOW << "Cure Default " << YELLOW 
        << "constructor called" << RESET << std::endl;
}

/* Parameter Constructor */
Cure::Cure(std::string const &type) : AMateria(type)
{
    std::cout << BOLDYELLOW << "Cure Parameter " << YELLOW 
        << "constructor called" << RESET << std::endl;
}

/* Copy Constructor */
Cure::Cure(Cure const &copy) : AMateria(copy)
{
    *this = copy;
    std::cout << BOLDYELLOW << "Cure Copy " << YELLOW 
        << "constructor called" << RESET << std::endl;
}

/* Destructor */
Cure::~Cure()
{
    std::cout << BOLDRED << "Cure Destructor " << RED
        << "called" << RESET << std::endl;
}

/* Operator = Overload */
Cure &Cure::operator=(Cure const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

/* clone:  this function returns a new instance of the current class */
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

/* use: this function prints a message */
void Cure::use(ICharacter& target)
{
    std::cout << BOLDYELLOW << "* heals " << target.getName() 
        << "'s wounds *" << RESET << std::endl;
}
