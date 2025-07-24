/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:07 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/23 15:39:24 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat( void ) : WrongAnimal()
{
    std::cout << "WrongCat default constructor called." << std::endl;
    this->type = "WrongCat";
}

// Copy constructor
WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

// Copy assignment operator
WrongCat&    WrongCat::operator=( WrongCat const &other )
{
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called." << std::endl;
}

// Member function
void    WrongCat::makeSound( void ) const
{
    std::cout << this->type << ": * MEOW MEOW *" << std::endl; 
}
