#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	std::cout << "ScavTrap (Child) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	std::cout << "ScavTrap (Child) constructor called with string" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "ScavTrap (Chile) Copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap (Child)" << name << " " << "destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout	<< "ScavTrap " << name << " is copied from " << ref.name << std::endl;
	if (this != &ref)
	{
		HP = ref.HP;
		EP = ref.EP;
		AD = ref.AD;
		name = ref.name;
	}
	return *this;
}

void	ScavTrap::attack(std::string const &target)
{
	if (HP == 0)
	{
		std::cout << "ScavTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "ScavTrap (" << name
	<< ") attack (" << target << "), causing ("
	<< AD << ") points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is guarding the gate!" << std::endl;
}