#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "ClapTrap &ref Default constructor called" << std::endl;
	*this = ref;
}

ClapTrap::ClapTrap(std::string name) : name(name), HP(10), EP(10), AD(0)
{
	std::cout << "constructor called with string" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " " << "destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = ref.name;
	this->AD = ref.AD;
	this->HP = ref.HP;
	this->EP = ref.EP;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	if (HP == 0)
	{
		std::cout << "ClapTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "ClapTrap (" << name
	<< ") attack (" << target << "), causing ("
	<< AD << ") points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap (" << name
	<< ") take (" << amount << ") points of damage !" << std::endl;
	if (HP > 0)
	{
		HP = HP - amount;
		if (HP < 0)
				HP = 0;
		std::cout << name << " HP = " << HP << std::endl;
		if (HP == 0)
			std::cout << "ClapTrap (" << name << ") Die " << std::endl; 
	}
	else
		std::cout << "ClapTrap (" << name << ") Die " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	HP = HP + amount;
	std::cout << "ClapTrap (" << name
	<< ") is repaired (" << amount << ") points." << std::endl;
	std::cout << name << " HP = " << HP << std::endl;
}