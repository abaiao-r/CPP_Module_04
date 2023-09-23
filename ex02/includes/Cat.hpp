/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:43:19 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 19:08:00 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../includes/AAnimal.hpp"
# include "../includes/Brain.hpp"

class Cat: public AAnimal
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
