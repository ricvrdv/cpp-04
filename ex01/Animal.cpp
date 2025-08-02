/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:21:44 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:22:21 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal( void ) : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

// Copy constructor
Animal::Animal( Animal const &other ) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

// Copy assignment operator
Animal& Animal::operator=( Animal const &other )
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

// Member function
void    Animal::makeSound( void ) const
{
    std::cout << this->type << ": * NO  SOUND *" << std::endl;
}

// Getter
std::string Animal::getType( void ) const
{
    return (this->type);
}
