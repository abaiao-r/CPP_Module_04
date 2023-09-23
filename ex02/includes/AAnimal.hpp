/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:41 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 18:55:38 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "../includes/colours.hpp"


class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal(void);
        AAnimal(AAnimal const &src);
        //virtual cause we want to delete the right child class
        virtual ~AAnimal(void);

        AAnimal &operator=(AAnimal const &src);

        std::string getType(void) const;
        /*pure virtual function means that the class that inherits from this
          class must implement this function*/
        virtual void makeSound(void) const = 0;
};

#endif
