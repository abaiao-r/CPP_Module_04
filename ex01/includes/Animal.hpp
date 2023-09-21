/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:41 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 20:56:08 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "../includes/colours.hpp"


class Animal
{
    protected:
        std::string type;

    public:
        Animal(void);
        Animal(Animal const &src);
        //virtual cause we want to delete the right child class
        virtual ~Animal(void);

        Animal &operator=(Animal const &rhs);

        std::string getType(void) const;
        // virtual cause we want to override it in the child classes
        virtual void makeSound(void) const;
};

#endif
