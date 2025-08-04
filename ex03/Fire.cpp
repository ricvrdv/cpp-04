/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:06:00 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/04 12:06:01 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

// Default constructor
Fire::Fire() : AMateria("fire")
{
	//std::cout << "Fire default constructor was called" << std::endl;
}

// Copy constructor
Fire::Fire( Fire const &other ) : AMateria(other)
{
	//std::cout << "Fire copy constructor was called" << std::endl;
}

// Copy assignment operator
Fire&	Fire::operator=( Fire const &other )
{
	//std::cout << "Fire copy assignment operator was called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

// Destructor
Fire::~Fire()
{
	//std::cout << "Fire destructor was called" << std::endl;
}

// Member functions
AMateria*	Fire::clone() const
{
	return (new Fire(*this));
}

void	Fire::use( ICharacter &target )
{
	std::cout << "* fires off bullets of fire at " << target.getName() << " *" << std::endl;
}

