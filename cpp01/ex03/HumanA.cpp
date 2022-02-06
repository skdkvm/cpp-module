/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggki <seonggki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:34:14 by seonggki          #+#    #+#             */
/*   Updated: 2022/01/29 18:36:31 by seonggki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}