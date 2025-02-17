#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap B("Bob");
	ClapTrap J("\"J\"");

	J.attack("\"J\"");
	B.takeDamage(5);
	B.beRepaired(5);
	for (int i = 0; i < 10; i++)
	{
		J.attack("\"J\"");
		B.takeDamage(0);
	}
	//test
	std::cout << "----------test----------\n";
	B.takeDamage(42);
	B.beRepaired(42);
	return (0);
}