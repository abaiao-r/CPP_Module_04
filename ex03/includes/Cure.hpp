/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:45:52 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 01:10:26 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "includes.hpp"

class Cure : public AMateria
{
    protected:
        std::string _type;
    public:
        Cure();
        Cure(std::string const &type);
        Cure(Cure const &copy);
        virtual ~Cure();
        Cure &operator=(Cure const &src);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif