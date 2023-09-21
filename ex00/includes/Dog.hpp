/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:35:52 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../includes/Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog &operator=(Dog const &src);

        virtual void makeSound(void) const;        
};

#endif
