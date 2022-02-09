/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:21:27 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/09 16:56:57 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
	std::cout << Green << "ClapTrap Default constructor called" << Reset << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << Green << "ClapTrap Default constructor called" << Reset << std::endl;
	*this = ref;
}

ClapTrap::ClapTrap(std::string name) : name(name), HP(10), EP(10), AD(0)
{
	std::cout << Green << "ClapTrap constructor called with string" << Reset << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << Red << "ClapTrap " << name << " " << "destructor called" << Reset << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << Green << "Assignation operator called" << Reset << std::endl;
	this->name = ref.name;
	this->AD = ref.AD;
	this->HP = ref.HP;
	this->EP = ref.EP;
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	if (EP == 0)
	{
		std::cout << "ClapTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "ClapTrap (" << name << ") attack (" << target << "), causing (" << AD << ") points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap (" << name << ") take (" << amount << ") points of damage !" << std::endl;
	if (EP > 0)
	{
		EP = EP - amount;
		if (EP < 0)
		{
			EP = 0;
		}
		std::cout << Yellow << name << " EP = " << EP << Reset << std::endl;
		if (EP == 0)
		{
			std::cout << Red << name << " Die " << Reset << std::endl; 
		}
	}
	else if (EP < 0)
	{
		EP = 0;
		std::cout << Red << name << " EP = " << EP << " Die " << Reset << std::endl; 
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	EP = EP + amount;
	std::cout << Blue << "ClapTrap (" << name << ") is repaired (" << amount << ") points." << Reset << std::endl;
	std::cout << Yellow << name << " EP = " << EP << Reset << std::endl;
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (AD);
}