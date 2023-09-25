/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:27:51 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 16:28:33 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include   <iostream>
# include   <string>
# include   "AMateria.hpp"
# include   "ICharacter.hpp"
# include   "colours.hpp"


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
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif