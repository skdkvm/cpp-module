#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap
{
    private:
        /* data */
    public:
        ScavTrap(/* args*/);
        ScavTrap(const ScavTrap &ref);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &ref);
};

#endif