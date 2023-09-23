/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:16 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 17:46:23 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

/* main: 
 * 1. Test 1: Virtual Destructor
 * 2. Test 2: Copy Constructor and Assignment Operator
 * 3. Test 3: Deep Copy Test
 * 4. Test 4: WrongAnimal and WrongCat
 */
int main(void)
{

    std::cout << std::endl << "**********  TEST 1 **********\n" << std::endl;
    {
        /* this test is to check if the copy constructor is working properly
        if it is not working properly, the destructor will not be called
        if it is working properly, the destructor will be called */
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
            delete animals[i];
        }
    }
    std::cout << "\n--- Test 2: Copy Constructor and Assignment Operator ---\n"
        << std::endl;
    {
        /* this test is to check if the copy constructor and assignment operator
        are working properly. If they are not working properly, the copied
        object will not be the same as the original object */
        Dog originalDog;
        Dog copyDog1 = originalDog; // Copy constructor
        Dog copyDog2;
        copyDog2 = originalDog;     // Assignment operator

        Cat originalCat;
        Cat copyCat1 = originalCat; // Copy constructor
        Cat copyCat2;
        copyCat2 = originalCat;     // Assignment operator

        std::cout << "Original Dog's Type: " << originalDog.getType()
            << std::endl;
        std::cout << "Copied Dog's Type: " << copyDog1.getType() << std::endl;
        std::cout << "Copied Dog's Type: " << copyDog2.getType() << std::endl;

        std::cout << "Original Cat's Type: " << originalCat.getType()
            << std::endl;
        std::cout << "Copied Cat's Type: " << copyCat1.getType() << std::endl;
        std::cout << "Copied Cat's Type: " << copyCat2.getType() << std::endl;
    }
    std::cout << "\n--- Test 3: Deep Copy Test ---\n" << std::endl;
    {
        /* To check if the deep copy is working properly,
        we will modify the original object and check if the copied object is
        still the same as the original object. If the copied object is still
        the same as the original object, it means that the deep copy is not
        working properly. */
        Dog originalDog;
        Dog copyDog = originalDog; // Copy constructor

        Brain* dogBrain = originalDog.getBrain();
        Brain* copyDogBrain = copyDog.getBrain();

        // Modify the original dog's brain
        dogBrain->setIdeas(0, "New Idea");

        // Check if the copied dog's brain is still the same
        std::cout << "Original Dog's First Idea: " << dogBrain->getIdeas(0)
            << std::endl;
        std::cout << "Copied Dog's First Idea: " << copyDogBrain->getIdeas(0)
            << std::endl;
    }

    std::cout << "\n--- Test 3.1: Deep Copy Test ---\n" << std::endl;
    {
        /* To check if the deep copy is working properly,
        we will modify the original object and check if the copied object is
        still the same as the original object. If the copied object is still
        the same as the original object, it means that the deep copy is not
        working properly. */
        Cat originalCat;
        Cat copyCat = originalCat; // Copy constructor

        Brain* catBrain = originalCat.getBrain();
        Brain* copyCatBrain = copyCat.getBrain();

        // Modify the original cat's brain
        catBrain->setIdeas(0, "New Idea");

        // Check if the copied cat's brain is still the same
        std::cout << "Original Cat's First Idea: " << catBrain->getIdeas(0)
            << std::endl;
        std::cout << "Copied Cat's First Idea: " << copyCatBrain->getIdeas(0)
            << std::endl;
    }
    std::cout << "\n--- Test 3.2: Deep Copy Test ---\n" << std::endl;
    {
        Dog basic;
        basic.getBrain()->setIdeas(0, "Basic Idea");
        std::cout << "Basic Dog's First Idea: " << basic.getBrain()->getIdeas(0) 
            << std::endl;
        {
            Dog tmp = basic;

            Brain* basicBrain = basic.getBrain();
            Brain* tmpBrain = tmp.getBrain();

            // Modify the tmp dog's brain
            tmpBrain->setIdeas(0, "New Idea");

            // Check if the basic dog's brain is still the same
            std::cout << "Basic Dog's First Idea: " << basicBrain->getIdeas(0) 
                << std::endl;
            std::cout << "Tmp Dog's First Idea: " << tmpBrain->getIdeas(0) 
                << std::endl;
        }

        // Check if the basic dog's brain is the same after tmp is out of scope
        std::cout << "Basic Dog's First Idea (After tmp scope): " 
            << basic.getBrain()->getIdeas(0) << std::endl;
    }
     /* Test 4: WrongAnimal and WrongCat
     WrongAnimal and WrongCat are the same as Animal and Cat, but without
     virtual keyword. So, the makeSound() method will not be overridden and
     the wrong sound will be played. */
    std::cout << "\n--- Test 4: WrongAnimal and WrongCat ---\n";
    {
        WrongAnimal* wAnimals[2];
        wAnimals[0] = new WrongAnimal();
        wAnimals[1] = new WrongCat();

        for (int i = 0; i < 2; i++)
        {
            wAnimals[i]->makeSound();
            delete wAnimals[i];
        }
    }
    return (0);
}
