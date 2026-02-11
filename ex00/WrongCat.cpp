#include "WrongCat.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << GREEN << "WrongCat Created" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << YELLOW << "WrongCat Copied" << RESET << std::endl;
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat Destroyed" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << YELLOW << "WrongCat Assigned" << RESET << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << BLUE << "WrongMiaaaau!" << RESET << std::endl;
}