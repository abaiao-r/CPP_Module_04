/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefrancisco <andrefrancisco@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:16 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 13:37:49 by andrefranci      ###   ########.fr       */
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

    std::cout << std::endl << "**********  TEST 1 **********\n" << std::endl;
    {
        std::cout << std::endl << "**********  TEST 1.1 **********\n" 
            << std::endl;
        //this test is to check if the copy constructor is working properly
        //if it is not working properly, the destructor will not be called
        //if it is working properly, the destructor will be called
/*         Animal *animals[10];
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        for (int i = 0; i < 10; i++)
        {
            delete animals[i];
        } */
    }
    std::cout << std::endl << "**********  TEST 1.2 **********\n" << std::endl;
    {
        //this test is to check if the assignment operator is working properly
        //if it is not working properly, the destructor will not be called
        //if it is working properly, the destructor will be called
        Animal *animals[10];
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
                *animals[i] = *new Dog();
            else
                *animals[i] = *new Cat();
        }
        for (int i = 0; i < 10; i++)
        {
            delete animals[i];
        }
    }
}
