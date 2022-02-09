#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	std::string	One = "one";
	std::string Two = "two";
	ScavTrap	p1(One);
	ScavTrap	p2;
	p2 = ScavTrap(Two);

	p1.attack(Two);
	p2.takeDamage(p1.getDamage());
	p2.beRepaired(3);
	p2.attack(One);
	p1.takeDamage(p2.getDamage());
	p1.beRepaired(10);
	
	p1.guardGate();
	p2.guardGate();
	
	return (0);
}