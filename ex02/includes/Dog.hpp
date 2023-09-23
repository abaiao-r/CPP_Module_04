/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:35:52 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 19:10:15 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../includes/AAnimal.hpp"
# include "../includes/Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog &operator=(Dog const &src);

        virtual void makeSound(void) const;   
        //pointer to brain
        Brain *getBrain(void) const;     
};

#endif
