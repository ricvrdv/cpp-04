#include "Cure.hpp"

// Default constructor
Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor was called" << std::endl;
}

// Copy constructor
Cure::Cure( Cure const &other ) : AMateria(other)
{
	std::cout << "Cure copy constructor was called" << std::endl;
}

// Copy assignment operator
Cure&	Cure::operator=( Cure const &other )
{
	std::cout << "Cure copy assignment operator was called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

// Destructor
Cure::~Cure()
{
	std::cout << "Cure destructor was called" << std::endl;
}

// Member functions
AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
