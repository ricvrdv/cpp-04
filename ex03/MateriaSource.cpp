/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:19:56 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 18:19:58 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Default contructor
MateriaSource::MateriaSource()
{
    //std::cout << "MateriaSource default contructor was called" << std::endl;
    for (int i = 0; i < MAX; i++)
        this->_templates[i] = NULL;
}

// Copy constructor
MateriaSource::MateriaSource( MateriaSource const &other )
{
    //std::cout << "MateriaSource copy constructor was called" << std::endl;
    for (int i = 0; i < MAX; i++)
    {
        if (other._templates[i])
			this->_templates[i] = other._templates[i]->clone();
        else
            this->_templates[i] = NULL;
    }
}

// Copy assignment operator
MateriaSource&	MateriaSource::operator=( MateriaSource const &other )
{
	//std::cout << "MateriaSource copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < MAX; i++)
		{
			delete this->_templates[i];
			if (other._templates[i])
				this->_templates[i] = other._templates[i]->clone();
			else
				this->_templates[i] = NULL;
		}
	}
	return (*this);
}

// Destructor
MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor was called" << std::endl;
	for (int i = 0; i < MAX; i++)
		delete this->_templates[i];
}

// Member functions
void	MateriaSource::learnMateria( AMateria* m )
{
	if (!m)
		return ;
	for (int i = 0; i < MAX; i++)
	{
		if (!this->_templates[i])
		{
			this->_templates[i] = m->clone();
			std::cout << "Learnt Materia of type " << m->getType() << std::endl;
			delete m;
			return ;
		}
	}
	std::cout << "Cannot learn Materia" << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < MAX; i++)
	{
		if (this->_templates[i] && this->_templates[i]->getType() == type)
		{
			std::cout << "Created Materia of type " << type << std::endl;
			return (this->_templates[i]->clone());
		}
	}
	std::cout << "Materia of type " << type << " was not created" << std::endl;
	return (NULL);
}