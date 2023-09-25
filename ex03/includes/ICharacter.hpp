/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:56:09 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 16:30:37 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "colours.hpp"

/* this is a forward declaration. it tells the compiler that the class exists
** and that it will be defined later in the code. this is useful when we have
** circular dependencies between classes. in this case, AMateria and ICharacter
** both need to know about each other, but we can't include both headers in
** each other's headers. so we include ICharacter in AMateria and forward
** declare AMateria in ICharacter. */
class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif

