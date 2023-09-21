# CPP_Module_04

![C++ Logo](cpp_logo.png)

## Table of Contents

1. [Project Overview](#project-overview)
2. [Significance and Relevance](#significance-and-relevance)
3. [Key Concepts in Focus](#key-concepts-in-focus)
4. [Exercise 00: Polymorphism](#exercise-00-polymorphism)
5. [Exercise 01: I don’t want to set the world on fire](#exercise-01-i-dont-want-to-set-the-world-on-fire)
6. [Exercise 02: Abstract class](#exercise-02-abstract-class)
7. [Exercise 03: Materia and Character](#exercise-03-materia-and-character)
8. [How to Run](#how-to-run)
9. [Conclusion](#conclusion)
10. [License](#license)

## Project Overview

The CPP_Module_04 project focuses on exploring advanced C++ concepts related to polymorphism, abstract classes, and interfaces. This project provides a structured set of exercises that allow participants to implement and demonstrate their understanding of these fundamental programming concepts. Through a series of coding exercises, participants will create classes, inheritance hierarchies, and interfaces, showcasing their ability to design and implement complex software systems in C++.

## Significance and Relevance

Understanding polymorphism, abstract classes, and interfaces is crucial for building robust and maintainable C++ applications. These concepts allow developers to create flexible and extensible codebases, enabling easier maintenance and scalability. This project is significant because it provides hands-on experience in working with these concepts, which are widely used in real-world software development scenarios. By completing these exercises, participants will be better prepared to tackle complex C++ projects and contribute to the development of high-quality software.

## Key Concepts in Focus

- **Polymorphism:** Polymorphism is a key concept in object-oriented programming that allows objects of different classes to be treated as objects of a common base class. It enables dynamic method dispatch, where the appropriate method is called based on the actual type of the object at runtime.

- **Abstract Classes:** Abstract classes are classes that cannot be instantiated directly but serve as base classes for other classes. They often contain pure virtual functions, which must be implemented by derived classes. Abstract classes provide a blueprint for creating concrete classes with shared behavior.

- **Interfaces:** Interfaces define a contract that classes must adhere to by implementing specific methods. In C++, interfaces are typically represented using pure virtual functions. Classes that implement an interface must provide concrete implementations for all the interface's methods.

## Exercise 00: Polymorphism

**Introduction:**

Exercise 00 focuses on implementing a base class called `Animal` and creating derived classes `Dog` and `Cat`. These classes showcase polymorphism by demonstrating how objects of different derived classes can be treated as objects of the base class. The exercise also emphasizes the use of virtual functions and inheritance.

**Relevance:**

This exercise is relevant because it helps participants grasp the concept of polymorphism and inheritance, which are fundamental to C++ programming. It challenges participants to design and implement class hierarchies and understand the behavior of virtual functions.

**Key Concepts:**

- Base and Derived Classes
- Inheritance
- Polymorphism
- Virtual Functions

## Exercise 01: I don’t want to set the world on fire

**Introduction:**

Exercise 01 introduces the concept of memory management and dynamic allocation in C++. Participants will implement a `Brain` class, which contains an array of 100 `std::string` called `ideas`. Additionally, they will create `Dog` and `Cat` classes that have a private `Brain*` attribute. This exercise emphasizes the importance of proper memory cleanup and deep copying.

**Relevance:**

Understanding memory management is crucial in C++ to avoid memory leaks and ensure program stability. This exercise reinforces the concept of ownership and responsibility for dynamically allocated resources.

**Key Concepts:**

- Memory Management
- Dynamic Allocation
- Deep Copy
- Destructor

## Exercise 02: Abstract class

**Introduction:**

Exercise 02 builds on the previous exercises by introducing the concept of abstract classes. Participants will modify the `Animal` class to make it an abstract class, meaning it cannot be instantiated directly. This exercise highlights the use of pure virtual functions and the benefits of creating abstract base classes.

**Relevance:**

Abstract classes are a fundamental concept in object-oriented programming. They allow for the creation of interfaces and provide a blueprint for derived classes. Understanding abstract classes is essential for building extensible and maintainable codebases.

**Key Concepts:**

- Abstract Classes
- Pure Virtual Functions
- Interface Design

## Exercise 03: Materia and Character

**Introduction:**

Exercise 03 focuses on creating a system for managing `Materia` and `Character` objects. Participants will implement concrete classes `Ice` and `Cure` that inherit from an abstract base class `AMateria`. Additionally, they will create a class `Character` that manages an inventory of `AMateria` objects.

**Relevance:**

This exercise reinforces the concept of interfaces and abstract classes in C++. It also introduces the idea of managing a collection of objects within a class.

**Key Concepts:**

- Abstract Classes
- Inheritance
- Interfaces
- Object Management

# Conclusion

In conclusion, the CPP_Module_04 project provides a structured and hands-on approach to learning and mastering key C++ concepts such as polymorphism, abstract classes, and interfaces. By completing the exercises, participants can enhance their C++ programming skills and gain a deeper understanding of object-oriented principles. These concepts are essential for building robust and maintainable software applications in C++.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
