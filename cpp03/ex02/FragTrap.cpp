#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	std::cout << "FragTrap defalut constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 30;
	std::cout << "FragTrap constructor called with string" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = ref;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap (" << name << ") " << "destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout	<< "FragTrap " << name << " is copied from " << ref.name << std::endl;
	if (this != &ref)
	{
		HP = ref.HP;
		EP = ref.EP;
		AD = ref.AD;
		name = ref.name;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << name << "> say : " << "Hey, Guys! HighFive with me!" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (HP == 0)
	{
		std::cout << "FragTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "FragTrap (" << name
	<< ") attack (" << target << "), causing ("
	<< AD << ") points of damage !" << std::endl;
}