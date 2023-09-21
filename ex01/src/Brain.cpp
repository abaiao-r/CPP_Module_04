/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:19:11 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 22:35:55 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << BOLDBLUE << "Brain default constructor called" << RESET 
        << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << BOLDBLUE << "Brain copy constructor called" << RESET 
        << std::endl;
}

Brain::~Brain()
{
    std::cout << BOLDBLUE << "Brain destructor called" << RESET << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
    std::cout << BOLDBLUE << "Brain assignation operator called" << RESET 
        << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.getIdeas(i);
    }
    return (*this);
}

std::string Brain::getIdeas(int i) const
{
    return (this->ideas[i]);
}

void Brain::setIdeas(int i, std::string idea)
{
    this->ideas[i] = idea;
}
