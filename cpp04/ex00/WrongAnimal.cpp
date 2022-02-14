#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal
{
	std::cout << Green << "WrongAnimal default constructor called" << Reset << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << Green << "WrongAnimal Copy constructor called" << Reset <<std::endl;
	*this = ref;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
	type = ref.type;
	return *this;
}

WrongAnimal::~WrongAnimal
{
	std::cout << Red << "WrongAnimal destructor called" << Reset << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "something makes Wrongsound" << std::endl;
}