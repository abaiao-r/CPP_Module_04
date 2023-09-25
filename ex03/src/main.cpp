/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:29:12 by andrefranci       #+#    #+#             */
/*   Updated: 2023/09/25 19:47:43 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"


int main()
{
    std::cout << "..........TEST 0: ABSTRACT CLASSES........" << std::endl;
    /* This code will  compile since AMateria is an abstract class
        * and cannot be iantiated.
        * AMateria materia; Error: cannot declare variable 'materia' to be of
        * abstract type 'AMateria' */
    //AMateria materia;
    /* This code will  compile since ICharacter is an abstract class
        * and cannot be iantiated.
        * ICharacter character; Error: cannot declare variable 'character' to be of
        * abstract type 'ICharacter' */
    //ICharacter character;
    /* This code will  compile since IMateriaSource is an abstract class
        * and cannot be iantiated.
        * IMateriaSource materiaSource; Error: cannot declare variable 'materiaSource' to be of
        * abstract type 'IMateriaSource' */
    //IMateriaSource materiaSource;
    std::cout << "...............TEST 1: GIVEN TEST.............." << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << " Test 2: test 5 equiped materias" << std::endl;
    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Ice());
    src2->learnMateria(new Ice());
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    ICharacter* me2 = new Character("me");
    AMateria* tmp2;
    tmp2 = src2->createMateria("nothing");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    me2->equip(tmp2);
    ICharacter* bob2 = new Character("bob");
    me2->use(0, *bob2);
    me2->use(1, *bob2);
    me2->use(2, *bob2);
    me2->use(3, *bob2);
    me2->use(4, *bob2);
    me2->use(-5, *bob2);
    delete bob2;
    delete me2;
    delete src2;
    delete tmp2;

    std::cout << std::endl << " Test 3: test unequip" << std::endl;
    IMateriaSource* src3 = new MateriaSource();
    src3->learnMateria(new Ice());
    src3->learnMateria(new Cure());
    ICharacter* me3 = new Character("me");
    AMateria* tmp3;
    AMateria* tmp4;
    me3->unequip(0); // nothing to unequip
    tmp4 = src3->createMateria("ice");
    me3->equip(tmp2);
    tmp3 = src3->createMateria("cure");
    me3->equip(tmp3);
    ICharacter* bob3 = new Character("bob");
    me3->use(0, *bob3);
    me3->use(1, *bob3);
    me3->unequip(0);
    me3->use(0, *bob3);
    me3->unequip(1);
    me3->use(1, *bob3);
    me3->unequip(-1); // nothing to unequip
    me3->unequip(4); // nothing to unequip
    delete bob3;
    delete me3;
    delete src3;
    delete tmp3;
    delete tmp4;
    
    

}
