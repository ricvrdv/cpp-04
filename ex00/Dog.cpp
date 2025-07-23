/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:11:33 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:11:46 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal()
{
    std::cout << "Dog default constructor called." << std::endl;
    this->type = "Dog";
}

// Copy constructor
Dog::Dog( Dog const &other ) : Animal(other)
{
    std::cout << "Dog copy constructor called." << std::endl;
}

// Copy assignment operator
Dog&    Dog::operator=( Dog const &other )
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Dog copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
Dog::~Dog( void )
{
    std::cout << "Dog destructor called." << std::endl;
}

// Member function
void    Dog::makeSound( void ) const
{
    std::cout << "* WOOF WOOF *" << std::endl;
}