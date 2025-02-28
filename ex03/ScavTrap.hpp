#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& src);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
