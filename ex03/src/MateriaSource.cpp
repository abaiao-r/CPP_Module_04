/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:21:50 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 19:41:40 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

/* Default constructor */
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
    std::cout << BOLDGREEN << "MateriaSource Default constructor called" 
        << RESET << std::endl;
}

/* Copy constructor */
MateriaSource::MateriaSource(MateriaSource const &copy)
{
    *this = copy;
    std::cout << BOLDGREEN << "MateriaSource Copy constructor called" 
        << RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
    }
    std::cout << BOLDRED << "MateriaSource Destructor called" << RESET 
        << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materia[i])
                delete this->_materia[i];
            if (src._materia[i])
                this->_materia[i] = src._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = m;
            return ;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (NULL);
}
