#include "ClapTrap.hpp"

int	main(void)
{
	std::string	One = "one";
	std::string Two = "two";
	ClapTrap	p1(One);
	ClapTrap	p2;
	p2 = ClapTrap(Two);

	p1.attack(Two);
	p2.takeDamage(10);
	p2.beRepaired(3);
	p2.attack(One);
	p1.takeDamage(5);
	p1.beRepaired(15);
	
	return (0);
}