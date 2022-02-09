#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	p1("One");

	std::cout << std::endl;
	p1.whoAmI();
	std::cout << std::endl;
	
	{
		DiamondTrap p2("Two");
		DiamondTrap p3("Three");

		std::cout << std::endl;
		
		p2.whoAmI();
		p3.whoAmI();		
		p3.highFivesGuys();
		
		std::cout << std::endl;
		
		p2.attack("Three");
		p3.takeDamage(p2.getDamage());
		
		std::cout << std::endl;
		
		p3.attack("Two");
		p2.takeDamage(p3.getDamage());
		
		std::cout << std::endl;
		
		p2.guardGate();
		
		std::cout << std::endl;
	}

	std::cout << std::endl;
	
	DiamondTrap p4;
	
	std::cout << std::endl;
	
	p4.whoAmI();
	
	std::cout << std::endl;

	p4 = p1;
	
	std::cout << std::endl;
	
	p4.whoAmI();
	
	std::cout << std::endl;
	return (0);
}