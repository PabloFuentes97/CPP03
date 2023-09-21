#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dt("pepe");

	std::cout << dt << std::endl;
	dt.attack("jose");
	dt.takeDamage(50);
	dt.highFivesGuys();
	dt.beRepaired(10);
	dt.guardGate();
	dt.takeDamage(60);
	dt.highFivesGuys();
	return (0);
}