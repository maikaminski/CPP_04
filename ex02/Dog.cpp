#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog Created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog Copied" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Assigned" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (!brain)
            brain = new Brain();
        *brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Au Au!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}
