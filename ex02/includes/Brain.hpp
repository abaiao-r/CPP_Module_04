/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:34 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 18:56:18 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "../includes/colours.hpp"
#include "../includes/AAnimal.hpp"
#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &operator=(Brain const &rhs);

        std::string getIdeas(int i) const;
        void setIdeas(int i, std::string idea);
};

#endif
