#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		name;
		unsigned int	HitPoint;
		unsigned int	MaxHitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& src);
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif