#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << Green << "WrongCat default constructor called" << Reset << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << Green << "WrongCat Copy constructor called" << Reset << std::endl;
	*this = ref;
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
	WrongAnimal::operator=(ref);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << Red << "WrongCat default constructor called" << Reset << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow Wrong Meow" << std::endl;	
}