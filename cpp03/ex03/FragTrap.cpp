/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:22:12 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/09 17:12:25 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	std::cout << Yellow << "FragTrap (Child) defalut constructor called" << Reset << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 30;
	std::cout << Yellow << "FragTrap (Child) constructor called with string" << Reset << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	*this = ref;
	std::cout << Yellow << "FragTrap (Child) Copy constructor called" << Reset << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << Red << "FragTrap (" << name << ") " << "destructor called"<< Reset << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "FragTrap " << name << " is copied from " << ref.name << std::endl;
	this->HP = ref.HP;
	this->EP = ref.EP;
	this->AD = ref.AD;
	this->name = ref.name;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout<< Cyan << "FragTrap <" << name << "> say : " << "Hey, Guys! HighFive with me!" << Reset << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (EP == 0)
	{
		std::cout << "FragTrap (" << name << ") can't attack, because it's already dead" << std::endl;
	}
	std::cout << "FragTrap (" << name << ") attack (" << target << "), causing (" << AD << ") points of damage !" << std::endl;
}