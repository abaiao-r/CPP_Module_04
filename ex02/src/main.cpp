/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:16 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/23 19:37:51 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

/* main: 
 * 1. Test 1: Instantiating an abstract class (AAnimal)
 * 2. Test 2: Instantiating Cat and Dog that inherit from AAnimal
 */
int main(void)
{
    std::cout << std::endl << "**********  TEST 1 **********\n" << std::endl;
    {
        /* This code will  compile since AAnimal is an abstract class
         * and cannot be iantiated.
         * AAnimal animal; Error: cannot declare variable 'animal' to be of
         * abstract type 'AAnimal' */
        //AAnimal Animal;
    }
    std::cout << "\n--- Test 2: Cat and Dog ---\n" << std::endl;
    {
        /*this test will show that dog and cat can still be instantiated
         * even though they inherit from an abstract class
         */
        Cat cat;
        Dog dog;

        cat.makeSound();
        dog.makeSound();
    }
    return (0);
}
