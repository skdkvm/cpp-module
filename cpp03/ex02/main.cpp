#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	std::string	One = "one";
	std::string Two = "two";
	ScavTrap	p1(One);
	FragTrap	p2;
	p2 = FragTrap(Two);

	p1.attack(Two);
	p2.takeDamage(20);
	p2.beRepaired(3);
	
	p2.attack(One);
	p1.takeDamage(30);
	p1.beRepaired(15);
	
	p1.guardGate();
	p2.highFivesGuys();
	
	return (0);
}
/*int	main(void)
{
	FragTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(10);
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(20);
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(30);
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(40);
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return (0);
}*/