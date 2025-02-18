#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap* list[2];
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");

	list[0] = &clap;
	list[1] = &scav;
	list[0]->attack("S"); //オーバーライド
	list[1]->attack("C");
	clap.attack("S");
	// clap.takeDamage(5);
	// clap.beRepaired(3);

	scav.attack("C");
	// scav.takeDamage(42);
	// scav.beRepaired(420);
	// scav.guardGate();
	return (0);
}