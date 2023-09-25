/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:30:29 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 18:52:03 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

/* Default Constructor */
Ice::Ice() : AMateria("ice")
{
    std::cout << BOLDBLUE << "Ice Default " << BLUE 
        << "constructor called" << RESET << std::endl;
}

/* Parameter Constructor */
Ice::Ice(std::string const &type) : AMateria(type)
{
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
    return (new Ice(*this));
}

/* use:  this function use the materia on the target */
void Ice::use(ICharacter& target)
{
    std::cout << BLUE << "* shoots an ice bolt at " << BOLDBLUE 
        << target.getName() << " *" << RESET << std::endl;
}
