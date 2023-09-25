/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:38:25 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 00:37:27 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/* Default Constructor */
AMateria::AMateria()
{
    this->_type = "default";
    std::cout << BOLDORANGE << "AMateria Default " << ORANGE
        << "constructor called" << RESET << std::endl;
}

/* Parameter Constructor */
AMateria::AMateria(std::string const &type)
{
    this->_type = type;
    std::cout << BOLDORANGE << "AMateria Parameter " << ORANGE 
        << "constructor called" << RESET << std::endl;
}

/* Copy Constructor */
AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
    std::cout << BOLDORANGE << "AMateria Copy " << ORANGE 
        << "constructor called" << RESET << std::endl;
}

/* Destructor */
AMateria::~AMateria()
{
    std::cout << BOLDRED << "AMateria Destructor " << RED << "called" 
        << RESET << std::endl;
}

/* Operator = Overload */
AMateria &AMateria::operator=(AMateria const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

/* getType: Returns the protected _type  from AMateria */
std::string const &AMateria::getType() const
{
    return (this->_type);
}

/* use: this function returns a new instance of the current class */
void AMateria::use(ICharacter& target)
{
    (void)target;
}

