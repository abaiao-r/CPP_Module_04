/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:49:09 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 19:58:13 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "../includes/colours.hpp"

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal(void);

        WrongAnimal &operator=(WrongAnimal const &rhs);

        std::string getType(void) const;
        void makeSound(void) const;
};

#endif
