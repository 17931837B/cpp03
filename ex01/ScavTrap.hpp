/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:31:25 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:31:25 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
