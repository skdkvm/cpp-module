#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &ref);
	~FragTrap();
	FragTrap &operator=(const FragTrap &ref);
	void	highFivesGuys(void);
	void	attack(std::string const &target);
};

#endif