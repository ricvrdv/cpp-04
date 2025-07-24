/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:37:01 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/23 15:37:22 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal( WrongAnimal const &other )
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = other;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=( WrongAnimal const &other )
{
    if (this != &other)
        this->type = other.type;
    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

// Member function
void    WrongAnimal::makeSound( void ) const
{
    std::cout << this->type << ": * NO  SOUND *" << std::endl;
}

// Getter
std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}