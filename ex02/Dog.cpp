/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:31:58 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:32:00 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : AAnimal(), _pBrain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

// Copy constructor
Dog::Dog( Dog const &other ) : AAnimal(other), _pBrain(new Brain(*other._pBrain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog&    Dog::operator=( Dog const &other )
{
    if (this != &other)
    {
        AAnimal::operator=(other);
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
