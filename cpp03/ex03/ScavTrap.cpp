/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:22:55 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/09 16:33:37 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	std::cout << Yellow << "ScavTrap (Child) Default constructor called" << Reset << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	std::cout << Yellow << "ScavTrap (Child) constructor called with string"<< Reset << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	*this = ref;
	std::cout << Yellow << "ScavTrap (Chile) Copy constructor called" << Reset << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << Red << "ScavTrap (Child)" << name << " " << "destructor called" << Reset << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap " << name << " is copied from " << ref.name << std::endl;
	this->name = ref.name;
	this->HP = ref.HP;
	this->EP = ref.EP;
	this->AD = ref.AD;
	return *this;
}

void	ScavTrap::attack(std::string const &target)
{
	if (EP == 0)
	{
		std::cout << "ScavTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "ScavTrap (" << name << ") attack (" << target << "), causing (" << AD << ") points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << Cyan << "ScavTrap " << name << " is guarding the gate!" << Reset << std::endl;
}