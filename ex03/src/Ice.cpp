/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:30:29 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 00:57:51 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

/* Default Constructor */
Ice::Ice()
{
    this->_type = "ice";
    std::cout << BOLDBLUE << "Ice Default " << BLUE 
        << "constructor called" << RESET << std::endl;
}

/* Constructor */
Ice::Ice(std::string const &type)
{
    this->_type = type;
    std::cout << BOLDBLUE << "Ice " << BLUE 
        << "constructor called" << RESET << std::endl;
}

/* Destructor */
Ice::~Ice()
{
    std::cout << BOLDRED << "Ice " << RED 
        << "destructor called" << RESET << std::endl;
}

/* Copy constructor */
Ice::Ice(Ice const &copy) : AMateria(copy)
{
    *this = copy;
    std::cout << BOLDBLUE << "Ice Copy " << BLUE 
        << "constructor called" << RESET << std::endl;
}

/* Operator = Overload */
Ice &Ice::operator=(Ice const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

/* clone:  this function returns a new instance of the current class */
AMateria* Ice::clone() const
{
    return (new Ice());
}

/* use:  this function use the materia on the target */
void Ice::use(ICharacter& target)
{
    std::cout << BLUE << "* shoots an ice bolt at " << BOLDBLUE 
        << target.getName() << " *" << RESET << std::endl;
}
