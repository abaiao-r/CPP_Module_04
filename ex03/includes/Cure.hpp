/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:45:52 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 16:28:46 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include   <iostream>
# include   <string>
# include   "AMateria.hpp"
# include   "ICharacter.hpp"
# include   "colours.hpp"


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