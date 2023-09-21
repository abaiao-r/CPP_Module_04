/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:16 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 17:05:54 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    if (!meta)
    {
        std::cout << "meta memory allocation failed" << std::endl;
        return (1);
    }
    const Animal *j = new Dog();
    if (!j)
    {
        std::cout << "j memory allocation failed" << std::endl;
        return (1);
    }
    const Animal *i = new Cat();
    if (!i)
    {
        std::cout << "i memory allocation failed" << std::endl;
        return (1);
    }

    std::cout << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;
    std::cout << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    std::cout << "---------------------" << std::endl;
    std::cout << "-----Wrong Cat-------" << std::endl;
    std::cout << "---------------------" << std::endl;

    const WrongAnimal *metaWrong = new WrongAnimal();
    if (!metaWrong)
    {
        std::cout << "metaWrong memory allocation failed" << std::endl;
        return (1);
    }
    const Animal *jWrong = new Dog();
    if (!jWrong)
    {
        std::cout << "jWrong memory allocation failed" << std::endl;
        return (1);
    }
    const WrongAnimal *iWrong = new WrongCat();
    if (!iWrong)
    {
        std::cout << "iWrong memory allocation failed" << std::endl;
        return (1);
    }
    
    std::cout << std::endl;
    std::cout << "metaWrong->getType(): " << metaWrong->getType() << std::endl;
    std::cout << "jWrong->getType(): " << jWrong->getType() << std::endl;
    std::cout << "iWrong->getType(): " << iWrong->getType() << std::endl;
    std::cout << std::endl;

    iWrong->makeSound(); //will output the cat sound!
    jWrong->makeSound();
    metaWrong->makeSound();

    std::cout << std::endl;
    delete metaWrong;
    delete jWrong;
    delete iWrong;
    std::cout << std::endl;
    
    return (0);
}
