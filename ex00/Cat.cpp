#include "Cat.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << GREEN << "Cat Created" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << YELLOW << "Cat Copied" << RESET << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destroyed" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << YELLOW << "Cat Assigned" << RESET << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << MAGENTA << "Miaaaau!" << RESET << std::endl;
}