#include "Dog.hpp"

Dog::Dog()
{
	std::cout << Green << "Dog default constructor called" << Reset << std::endl;
	type = "Dog";
	d_brain = new Brain;
	this->printIdeas();
}

Dog::Dog(const Dog &ref)
{
	std::cout << Green << "Dog copy default constructor called" << Reset << std::endl;
	*this = ref;
}

Dog& Dog::operator=(const Dog &ref)
{
	this->d_brain = new Brain(*ref.d_brain);
	this->type = ref.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << Red << "Dog default constructor called" << Reset << std::endl;
	delete d_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Bow-wow" << std::endl;	
}

void	Dog::printIdeas(void) const
{
	this->d_brain->printFirstIdeas();
	std::cout << " at " << &this->d_brain << std::endl;
}