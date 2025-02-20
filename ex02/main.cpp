/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 03:35:34 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 03:35:34 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap* list[3];
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	list[0] = &clap;
	list[1] = &scav;
	list[2] = &frag;
	list[0]->attack("S"); //オーバーライド
	list[1]->attack("C");
	list[2]->attack("F");
	clap.attack("S");
	// clap.takeDamage(5);
	// clap.beRepaired(3);

	scav.attack("C");
	// scav.takeDamage(42);
	// scav.beRepaired(420);
	// scav.guardGate();
	frag.attack("F");
	frag.highFivesGuys();
	return (0);
}
