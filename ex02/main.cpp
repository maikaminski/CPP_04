#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Basic polymorphism ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n=== Array of Animals ===" << std::endl;
    const int size = 10;
    Animal* animals[size];

    for (int idx = 0; idx < size / 2; ++idx)
        animals[idx] = new Dog();
    for (int idx = size / 2; idx < size; ++idx)
        animals[idx] = new Cat();

    for (int idx = 0; idx < size; ++idx)
        delete animals[idx];

    std::cout << "\n=== Deep copy (Dog) ===" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I want a bone");
    Dog copyDog(originalDog);
    copyDog.getBrain()->setIdea(0, "I want to play");
    std::cout << "Original Dog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog idea: " << copyDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== Deep copy (Cat) ===" << std::endl;
    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "I want fish");
    Cat copyCat(originalCat);
    copyCat.getBrain()->setIdea(0, "I want to nap");
    std::cout << "Original Cat idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Cat idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== WrongAnimal test ===" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    delete wrongCat;

    return 0;
}
