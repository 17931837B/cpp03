/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:30:47 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:30:47 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& src);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
