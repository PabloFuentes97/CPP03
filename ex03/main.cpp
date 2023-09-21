#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dt("pepe");

	std::cout << dt << std::endl;
	dt.attack("jose");
	dt.takeDamage(50);
	dt.beRepaired(10);

	return (0);
}