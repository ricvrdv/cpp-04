/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:34:13 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:34:15 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Default constructor
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor was called" << std::endl;
}

// Copy constructor
Ice::Ice( Ice const &other ) : AMateria(other)
{
	std::cout << "Ice copy constructor was called" << std::endl;
}

// Copy assignment operator
Ice&	Ice::operator=( Ice const &other )
{
	std::cout << "Ice copy assignment operator was called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Destructor
Ice::~Ice()
{
	std::cout << "Ice destructor was called" << std::endl;
}

// Member functions
AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
