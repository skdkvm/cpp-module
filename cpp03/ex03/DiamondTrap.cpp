/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:47:07 by seonggki          #+#    #+#             */
/*   Updated: 2022/02/10 19:41:30 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name(ClapTrap::name)
{
    ClapTrap::name += "_clap_name";
    std::cout << Purple << "DiamondTrap(Multiple) Default constructor called" << Reset << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->HP = FragTrap::HP;
    this->EP = ScavTrap::EP;
    this->AD = FragTrap::AD;
    std::cout << Purple << "DiamondTrap(Multiple) constructor called with string" << Reset << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
    std::cout << Purple << "DiamondTrap(Multiple) Default constructor called" << Reset << std::endl;
    *this = ref;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << Red << "DiamondTrap(Multiple) (" << name << ") " << "destructor called"<< Reset << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
{
    ScavTrap::operator=(ref);
    name = ref.name;
    std::cout << "DiamondTrap(Multiple) " << name << " is copied from " << ref.name << std::endl;
	return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "This DiamondTrap(Multiple) name is " << name << " and This ClapTrap name is " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

unsigned int	DiamondTrap::getDamage(void) const
{
	return (AD);
}
