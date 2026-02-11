#include "Animal.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"

Animal::Animal() : type("Animal")
{
    std::cout << GREEN << "Animal Created" << RESET << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << YELLOW << "Animal Copied" << RESET << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << RED << "Animal Destroyed" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << YELLOW << "Animal Assigned" << RESET << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "\033[35m" << "Animal Sound" << RESET << std::endl;
}