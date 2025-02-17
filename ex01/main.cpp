#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	// ClapTrap clap("Clap");
	ScavTrap scav("Scav");

	// clap.attack("S");
	// clap.takeDamage(5);
	// clap.beRepaired(3);

	scav.attack("C");
	scav.takeDamage(42);
	scav.beRepaired(420);
	scav.guardGate();
	return (0);
}