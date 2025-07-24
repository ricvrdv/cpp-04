/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:11:33 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/24 14:44:54 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal(), pBrain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

// Copy constructor
Dog::Dog( Dog const &other ) : Animal(other), pBrain(new Brain(*other.pBrain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog&    Dog::operator=( Dog const &other )
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->pBrain)
            delete this->pBrain;
        this->pBrain = new Brain(*other.pBrain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

// Destructor
Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->pBrain;
}

// Member function
void    Dog::makeSound( void ) const
{
    std::cout << this->type << ": * WOOF WOOF *" << std::endl;
}

// Getters and setters
std::string Dog::getIdea( int index ) const
{
    return (this->pBrain->getIdea(index));
}

void    Dog::setIdea( int index, std::string const &idea)
{
    this->pBrain->setIdea(index, idea);
}