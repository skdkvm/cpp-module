#include "Cat.hpp"

Cat::Cat()
{
	std::cout << Green << "Cat default constructor called" << Reset << std::endl;
	type = "Cat";
	c_brain = new Brain;
	this->printIdeas();
}

Cat::Cat(const Cat &ref)
{
	std::cout << Green << "Cat copy default constructor called" << Reset << std::endl;
	*this = ref;
}

Cat& Cat::operator=(const Cat &ref)
{
	this->c_brain = ref.c_brain;
	this->type = ref.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << Red << "Cat default constructor called" << Reset << std::endl;
	delete c_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;	
}

void	Cat::printIdeas(void) const
{
	this->c_brain->printFirstIdeas();
	std::cout << " at " << &this->c_brain << std::endl;
}

void	Cat::resetBrain() const
{
	this->c_brain->setIdeas();
}