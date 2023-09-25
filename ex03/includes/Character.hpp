/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:31:54 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 16:28:39 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "colours.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_materia[4];
    public:
        Character();
        Character(std::string name);
        Character(Character const &copy);
        virtual ~Character();
        
        Character &operator=(Character const &src);
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
