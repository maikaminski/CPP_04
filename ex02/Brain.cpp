#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Created" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copied" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Brain Destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Assigned" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return;
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return ideas[index];
}
