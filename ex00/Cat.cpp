/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:13:50 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat( void ) : Animal()
{
    std::cout << "Cat default constructor called." << std::endl;
    this->type = "Cat";
}

// Copy constructor
Cat::Cat( Cat const &other ) : Animal(other)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

// Copy assignment operator
Cat&    Cat::operator=( Cat const &other )
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Cat copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
Cat::~Cat( void )
{
    std::cout << "Cat destructor called." << std::endl;
}

// Member function
void    Cat::makeSound( void ) const
{
    std::cout << this->type << ": * MEOW MEOW *" << std::endl; 
}