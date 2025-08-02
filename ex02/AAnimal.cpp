/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:25:07 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:25:10 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal( void ) : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

// Copy constructor
AAnimal::AAnimal( AAnimal const &other ) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

// Copy assignment operator
AAnimal& AAnimal::operator=( AAnimal const &other )
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
AAnimal::~AAnimal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

// Getter
std::string AAnimal::getType( void ) const
{
    return (this->type);
}
