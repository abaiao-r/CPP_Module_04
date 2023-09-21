/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:43:19 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:06 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../includes/Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);

        Cat &operator=(Cat const &src);

        virtual void makeSound(void) const;        
};

#endif