#include "Dog.hpp"

Dog::Dog()
{
	std::cout << Green << "Dog default constructor called" << Reset << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &ref)
{
	std::cout << Green << "Dog copy default constructor called" << Reset << std::endl;
	*this = ref;
}

Dog& Dog::operator=(const Dog &ref)
{
	Animal::operator=(ref);
	return *this;
}

Dog::~Dog()
{
	std::cout << Red << "Dog default constructor called" << Reset << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bow-wow" << std::endl;	
}