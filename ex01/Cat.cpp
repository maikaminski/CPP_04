#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat Created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat Copied" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Assigned" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (!brain)
            brain = new Brain();
        *brain = *other.brain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaaaau!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}
