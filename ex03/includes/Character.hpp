/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:31:54 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 01:30:21 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "includes.hpp"

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
