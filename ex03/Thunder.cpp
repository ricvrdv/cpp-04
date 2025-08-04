/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Thunder.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:55:32 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/04 11:55:35 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Thunder.hpp"

// Default constructor
Thunder::Thunder() : AMateria("thunder")
{
	//std::cout << "Thunder default constructor was called" << std::endl;
}

// Copy constructor
Thunder::Thunder( Thunder const &other ) : AMateria(other)
{
	//std::cout << "Thunder copy constructor was called" << std::endl;
}

// Copy assignment operator
Thunder&	Thunder::operator=( Thunder const &other )
{
	//std::cout << "Thunder copy assignment operator was called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

// Destructor
Thunder::~Thunder()
{
	//std::cout << "Thunder destructor was called" << std::endl;
}

// Member functions
AMateria*	Thunder::clone() const
{
	return (new Thunder(*this));
}

void	Thunder::use( ICharacter &target )
{
	std::cout << "* shoots a lightning bolt at " << target.getName() << " *" << std::endl;
}
