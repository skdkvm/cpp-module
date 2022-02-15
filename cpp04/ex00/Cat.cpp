#include "Cat.hpp"

Cat::Cat()
{
	std::cout << Green << "Cat default constructor called" << Reset << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &ref)
{
	std::cout << Green << "Cat copy default constructor called" << Reset << std::endl;
	*this = ref;
}

Cat& Cat::operator=(const Cat &ref)
{
	Animal::operator=(ref);
	return *this;
}

Cat::~Cat()
{
	std::cout << Red << "Cat default constructor called" << Reset << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;	
}