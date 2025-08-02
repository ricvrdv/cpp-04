/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:33:31 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:33:33 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Default constructor
AMateria::AMateria() : _type("Undefined")
{
    //std::cout << "Materia default contructor was called" << std::endl;
}

// Parametric constructor
AMateria::AMateria( std::string const &type ) : _type(type)
{
    //std::cout << "Materia parametric constructor was called" << std::endl;
}

// Copy constructor
AMateria::AMateria( AMateria const &other ) : _type(other._type)
{
    //std::cout << "Materia copy constructor was called" << std::endl;
}

// Copy assignment constructor
AMateria&   AMateria::operator=( AMateria const &other )
{
    if (this != &other) {}
    //std::cout << "Materia copy assignment operator was called" << std::endl;
    return (*this);
}

// Destructor
AMateria::~AMateria()
{
    //std::cout << "Materia destructor was called" << std::endl;
}

// Getter
std::string const   &AMateria::getType() const
{
    return (this->_type);
}

// Member function
void    AMateria::use( ICharacter &target )
{
    std::cout << "* Nothing happens to " << target.getName() << " *" << std::endl;
}

