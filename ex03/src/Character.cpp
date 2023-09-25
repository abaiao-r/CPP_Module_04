/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:03:04 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 01:32:12 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character() : _name("Default")
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
    std::cout << BOLDMAGENTA << "Character Default constructor called" << RESET 
        << std::endl;
}

Character::Character(std::string name) : _name(name)
{
    int i;

    i = 0;
    while (i < 4)
    {
        _materia[i] = NULL;
        i++;
    }
    std::cout << BOLDMAGENTA << "Character Parametric constructor called" 
        << RESET << std::endl;
}

Character::Character(Character const &copy)
{
    *this = copy;
    _name = copy._name;
    std::cout << BOLDMAGENTA << "Character Copy constructor called" << RESET 
        << std::endl;
}

Character::~Character()
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (_materia[i])
            delete _materia[i];
        _materia[i] = NULL;
        i++;
    }
    std::cout << BOLDMAGENTA << "Character Destructor called" << RESET 
        << std::endl;
}

Character &Character::operator=(Character const &src)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (_materia[i])
            delete _materia[i];
        if (src._materia[i])
            _materia[i] = src._materia[i]->clone();
        else
            _materia[i] = NULL;
        i++;
    }
    _name = src._name;
    std::cout << BOLDMAGENTA << "Character Assignation operator called" << RESET 
        << std::endl;
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = m;
            return ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !_materia[idx] || _materia[idx] == NULL 
        || !std::isdigit(idx) || ft_count_digits(idx) > 1)
        return ;
    _materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !_materia[idx] || _materia[idx] == NULL
        || !std::isdigit(idx) || ft_count_digits(idx) > 1)
        return ;
    if (_materia[idx])
        _materia[idx]->use(target);
}

