#include "Animal.hpp"

Animal::Animal()
{
	std::cout << Green << "Animal default constructor called" << Reset <<std::endl;
	type = "Animal";
}

Animal::Animal(const Animal &ref)
{
	std::cout << Green << "Animal Copy constructor called" << Reset <<std::endl;
	*this = ref;
}

Animal& Animal::operator=(const Animal &ref)
{
	type = ref.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << Red << "Animal destructor called" << Reset << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "something makes sound" << std::endl;
}

