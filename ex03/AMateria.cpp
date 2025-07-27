#include "AMateria.hpp"

// Default constructor
AMateria::AMateria() : type("Undefined")
{
    std::cout << "Materia default contructor was called" << std::endl;
}

// Parametric constructor
AMateria::AMateria( std::string const &type ) : type(type)
{
    std::cout << "Materia parametric constructor was called" << std::endl;
}

// Copy constructor
AMateria::AMateria( AMateria const &other ) : type(other.type)
{
    std::cout << "Materia copy constructor was called" << std::endl;
}

// Copy assignment constructor
AMateria&   AMateria::operator=( AMateria const &other )
{
    std::cout << "Materia copy assignment operator was called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
AMateria::~AMateria()
{
    std::cout << "Materia destructor was called" << std::endl;
}

// Getter
std::string const   &AMateria::getType() const
{
    return (this->type);
}

// Member function
void    AMateria::use( ICharacter &target )
{
    (void)target;
    std::cout << "* Nothing happens to " << target.getName() << " *" << std::endl;
}

