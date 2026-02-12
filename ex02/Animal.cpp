#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Created" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copied" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal Destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Assigned" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}
