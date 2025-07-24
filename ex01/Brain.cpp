#include "Brain.hpp"

// Default constructor
Brain::Brain( void )
{
    std::cout << "Brain default constructor called" << std::endl;
}

// Copy constructor
Brain::Brain( Brain const &other )
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

// Copy assignment operator
Brain&  Brain::operator=( Brain const &other )
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

// Destructor
Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

// Getters and Setters
std::string Brain::getIdea( int index ) const
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    else
		return ("getIdea: Invalid index!");
}

void	Brain::setIdea( int index, std::string const &idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "setIdea: Invalid index!" << std::endl;
}
