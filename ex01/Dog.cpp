/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:11:33 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/24 22:09:01 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal(), _pBrain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

// Copy constructor
Dog::Dog( Dog const &other ) : Animal(other), _pBrain(new Brain(*other._pBrain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog&    Dog::operator=( Dog const &other )
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->_pBrain)
            delete this->_pBrain;
        this->_pBrain = new Brain(*other._pBrain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

// Destructor
Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_pBrain;
}

// Member function
void    Dog::makeSound( void ) const
{
    std::cout << this->type << ": * WOOF WOOF *" << std::endl;
}

// Getters and setters
std::string Dog::getIdea( int index ) const
{
    return (this->_pBrain->getIdea(index));
}

void    Dog::setIdea( int index, std::string const &idea)
{
    this->_pBrain->setIdea(index, idea);
}