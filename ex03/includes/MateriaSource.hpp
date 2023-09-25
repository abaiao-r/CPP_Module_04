/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:28:30 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 01:10:53 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "includes.hpp"

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
