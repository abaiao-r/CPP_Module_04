/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:43:19 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 22:16:31 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../includes/Animal.hpp"
# include "../includes/Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);

        Cat &operator=(Cat const &src);

        virtual void makeSound(void) const;
        // pointer to brain
        Brain *getBrain(void) const;      
};

#endif
