/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:28:30 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 13:33:22 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include   <iostream>
# include   <string>
# include   "AMateria.hpp"
# include   "ICharacter.hpp"
# include   "IMateriaSource.hpp"
# include   "colours.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        virtual ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &src);
        

        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

#endif
