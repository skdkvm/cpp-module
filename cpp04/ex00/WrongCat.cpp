#include "WrongCat.hpp"

WrongCat::WrongCat
{
	std::cout << Green << "WrongCat default constructor called" << Reset <<std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << Green << "WrongCat Copy constructor called" << Reset <<std::endl;
	return *this;
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
	WrongAnimal::operator=(ref);
	return *this;
}

WrongCat::~WrongCat
{
	std::cout << Red << "WrongCat default constructor called" << Reset << std::endl;
}