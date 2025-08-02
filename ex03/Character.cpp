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
    //std::cout << "Character default constructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        this->_inventory[i] = NULL;
    }
}

// Parametric constructor
Character::Character( std::string const &name ) : _name(name), _floorIndex(0)
{
    //std::cout << "Character parametric constructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 1024; i++)
        this->_floor[i] = NULL;
}

// Copy constructor
Character::Character( Character const &other ) : _name(other._name)
{
    //std::cout << "Character copy constructor was called" << std::endl;
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
    return (*this);
}

// Destructor
Character::~Character()
{
    //std::cout << "Character destructor was called" << std::endl;
    for (int i = 0; i < SLOTS; i++)
    {
        delete this->_inventory[i];
        this->_inventory[i] = NULL;
    }
    for (int i = 0; i < this->_floorIndex; i++)
        delete this->_floor[i];
}

// Getter
std::string const	&Character::getName() const
{
	return (this->_name);
}

// Member functions
void	Character::equip( AMateria *m )
{
	if (!m)
    {
		std::cout << "Unknown materia can't be equiped to " << this->_name << std::endl;
        return ;
    }
	for (int i = 0; i < SLOTS; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equiped with " << m->getType() << " in slot " << i << std::endl; 
			return ;
		}
	}
	std::cout << this->_name << " has no available slots" << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx < SLOTS && this->_inventory[idx])
	{
		if (_floorIndex < 1024)
            _floor[_floorIndex++] = _inventory[idx];
        std::cout << this->_name << " unequiped " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx >= 0 && idx < SLOTS)
    {
        if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
        else
            std::cout << "No Materia available in slot " << idx << std::endl;
    }
	else
		std::cout << "Slot " << idx << " is out of range." << std::endl;
}

