#include "Dog.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << GREEN << "Dog Created" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << YELLOW << "Dog Copied" << RESET << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << RED << "Dog Destroyed" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << YELLOW << "Dog Assigned" << RESET << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << CYAN << "Au Au!" << RESET << std::endl;
}