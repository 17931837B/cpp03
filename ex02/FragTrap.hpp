/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:35:27 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:35:27 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& src);
		void highFivesGuys(void);
};

#endif
