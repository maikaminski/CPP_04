#include "WrongAnimal.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << GREEN << "WrongAnimal Created" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << YELLOW << "WrongAnimal Copied" << RESET << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal Destroyed" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << YELLOW << "WrongAnimal Assigned" << RESET << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << BLUE << "WrongAnimal Sound" << RESET << std::endl;
}