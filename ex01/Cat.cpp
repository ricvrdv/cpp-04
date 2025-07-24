/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/24 22:06:44 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat( void ) : Animal(), _pBrain(new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

// Copy constructor
Cat::Cat( Cat const &other ) : Animal(other), _pBrain(new Brain(*other._pBrain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

// Copy assignment operator
Cat&    Cat::operator=( Cat const &other )
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->_pBrain)
            delete this->_pBrain;
        this->_pBrain = new Brain(*other._pBrain);
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

// Destructor
Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_pBrain;
}

// Member function
void    Cat::makeSound( void ) const
{
    std::cout << this->type << ": * MEOW MEOW *" << std::endl; 
}

// Getters and setters
std::string Cat::getIdea( int index ) const
{
    return (this->_pBrain->getIdea(index));
}

void    Cat::setIdea( int index, std::string const &idea)
{
    this->_pBrain->setIdea(index, idea);
}
