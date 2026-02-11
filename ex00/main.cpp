#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Teste 1: Criação e destruição ===" << std::endl;
    {
        Animal a;
        Dog d;
        Cat c;
    }
    std::cout << "\n=== Teste 2: Polimorfismo ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << "Tipo de j:  " << std::endl;
    std::cout << i->getType() << "Tipo de i:  " << std::endl;
    std::cout << "\n=== Teste 3: makeSound() polimórfrico ===" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n=== Teste4: Deletar (destrutor virtual) ===" << std::endl;
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n=== Teste 5: WrongAnimal e WrongCat ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\n Tipo: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound(); // Deveria chamar WrongCat::makeSound, mas chama WrongAnimal::makeSound
    wrongMeta->makeSound(); // Chama WrongAnimal::makeSound

    delete wrongMeta;
    delete wrongCat;

     return 0;
}