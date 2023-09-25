/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:27:51 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 01:10:32 by andrefranci      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "includes.hpp"

class Ice : public AMateria
{
    protected:
        std::string _type;
    public:
        Ice();
        Ice(std::string const &type);
        Ice(Ice const &copy);
        virtual ~Ice();
        Ice &operator=(Ice const &src);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif