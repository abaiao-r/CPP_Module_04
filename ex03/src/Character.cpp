/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:03:04 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 17:42:16 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/utils.hpp"

/* Default constructor */
Character::Character() : _name("Default")
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    std::cout << BOLDMAGENTA << "Character Default constructor called" << RESET 
        << std::endl;
}

/* Parametric constructor */
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

/* Copy constructor */
Character::Character(Character const &copy)
{
    *this = copy;
    std::cout << BOLDMAGENTA << "Character Copy constructor called" << RESET 
        << std::endl;
}

/* Destructor */
Character::~Character()
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->_materia[i])
            delete this->_materia[i];
        this->_materia[i] = NULL;
        i++;
    }
    std::cout << BOLDMAGENTA << "Character Destructor called" << RESET 
        << std::endl;
}

/* Operator overload */
Character &Character::operator=(Character const &src)
{
    int i;

    this->_name = src._name;
    i = 0;
    while (i < 4)
    {
        if (this->_materia[i])
            delete this->_materia[i];
        if (src._materia[i])
            this->_materia[i] = src._materia[i]->clone();
        else
            this->_materia[i] = NULL;
        i++;
    }
    _name = src._name;
    std::cout << BOLDMAGENTA << "Character Assignation operator called" << RESET 
        << std::endl;
    return (*this);
}

/* getName: Returns the name of the Character */
std::string const & Character::getName() const
{
    return (this->_name);
}

/* equip: Equip a materia to the Character */
void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = m;
            std::cout << BOLDGREEN << "Equip: " << RESET << "Materia added to " 
                << "slot " << i << std::endl;
            return ;
        }
        i++;
    }
}

/* unequip: Unequip a materia from the Character */
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !this->_materia[idx] 
        || this->_materia[idx] == NULL || std::isdigit(idx) == 1 
        || ft_count_digits(idx) > 1)
    {
        std::cout << BOLDRED << "Error: Invalid idx" << RESET << std::endl;
        return ;
    }
    this->_materia[idx] = NULL;
    std::cout << BOLDRED << "Unequip: " << RESET << "Materia removed from slot " 
        << idx << std::endl;
}

/* use: Use a materia from the Character */
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !this->_materia[idx] 
        || this->_materia[idx] == NULL  || std::isdigit(idx) == 1
        || ft_count_digits(idx) > 1)
    {
        std::cout << BOLDRED << "Error: Invalid idx" << RESET << std::endl;
        return ;
    }
    if (this->_materia[idx])
        this->_materia[idx]->use(target);
}
