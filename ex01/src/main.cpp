/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:16 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/21 22:44:42 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

/* n your main function, create and fill an array of Animal objects. Half of it will
be Dog objects and the other half will be Cat objects. At the end of your program
execution, loop over this array and delete every Animal. You must delete directly dogs
and cats as Animals. The appropriate destructors must be called in the expected order.
Don’t forget to check for memory leaks.
A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
are deep copies!*/

int main(void)
{
    const int size = 10;
    Animal *animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++)
    {
        delete animals[i];
    }

    std::cout << std::endl << "---------------------" << std::endl << std::endl;

    /* In your main function, create a Dog and a Cat object. Call getBrain on both of
    them and display the address returned. Call getIdeas on the Dog, and display the
    content of its ideas. Call getIdeas on the Cat, and display the content of its ideas.
    Change the Cat’s ideas and display them again. What do you observe?*/

    Dog dog;
    Cat cat;

    std::cout << "Dog Brain: " << dog.getBrain() << std::endl;
    std::cout << "Cat Brain: " << cat.getBrain() << std::endl;

    std::cout << std::endl << "Dog Ideas: " << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << dog.getBrain()->getIdeas(i) << std::endl;

    std::cout << std::endl << "Cat Ideas: " << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << cat.getBrain()->getIdeas(i) << std::endl;
    
    std::cout << std::endl << "Changing Cat Ideas: " << std::endl;
    for (int i = 0; i < 100; i++)
        cat.getBrain()->setIdeas(i, "New Idea");
    
    std::cout << std::endl << "Cat Ideas: " << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << cat.getBrain()->getIdeas(i) << std::endl;
    
    std::cout << std::endl << "Dog Ideas: " << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << dog.getBrain()->getIdeas(i) << std::endl;
    
    std::cout << std::endl << "---------------------" << std::endl << std::endl;

    /* In your main function, create a new Dog and a new Cat. Create an array of Animal
    containing the Dog and the Cat you just created. Loop over the array and make
    each animal makeSound().*/

    Dog *dog2 = new Dog();
    Cat *cat2 = new Cat();

    Animal *animals2[2] = {dog2, cat2};

    for (int i = 0; i < 2; i++)
    {
        animals2[i]->makeSound();
    }

    std::cout << std::endl << "---------------------" << std::endl << std::endl;

    /* In your main function, create a new Dog and a new Cat. Create an array of Animal
    containing the Dog and the Cat you just created. Loop over the array and make
    each animal makeSound(). When you’re sure it works, delete the array. Why does
    this work ?*/

    Dog *dog3 = new Dog();
    Cat *cat3 = new Cat();

    Animal *animals3[2] = {dog3, cat3};

    for (int i = 0; i < 2; i++)
    {
        animals3[i]->makeSound();
    }

    for (int i = 0; i < 2; i++)
    {
        delete animals3[i];
    }

    std::cout << std::endl << "---------------------" << std::endl << std::endl;
    return (0);
}
