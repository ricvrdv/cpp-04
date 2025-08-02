/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:16:02 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 16:16:04 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Default constructor
Character::Character() : _name("Unknown")
{
    std::cout << "Character default constructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        this->_inventory[i] = NULL;
    }
}

// Parametric constructor
Character::Character( std::string const &name ) : _name(name)
{
    std::cout << "Character parametric constructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        this->_inventory[i] = NULL;
    }
}

// Copy constructor
Character::Character( Character const &other ) : _name(other._name)
{
    std::cout << "Character copy constructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

// Copy assignment operator
Character&  Character::operator=( Character const &other )
{
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < SLOTS; i++)
        {
            delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
}

// Destructor
Character::~Character()
{
    std::cout << "Character destructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        delete this->_inventory[i];
        this->_inventory[i] = NULL;
    }
}

// Getter
std::string const	&Character::getName() const
{
	return (this->_name);
}

// Member functions
void	Character::equip( AMateria *m )
{
	
}