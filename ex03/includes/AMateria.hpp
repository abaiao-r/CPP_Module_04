/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:30:10 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 17:39:56 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "colours.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

/* this is a forward declaration of the class ICharacter. it is needed because
 * the AMateria class has a pointer to an ICharacter as a parameter in the use
 * function. the compiler needs to know that ICharacter is a class, so we
 * forward declare it here. */
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &copy);
        virtual ~AMateria();
        
        AMateria &operator=(AMateria const &src);
        
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
