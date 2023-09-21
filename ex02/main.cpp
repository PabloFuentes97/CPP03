#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	ft("pablo");

	std::cout << ft << std::endl;

	ft.attack("pepe");
	ft.takeDamage(40);
	ft.beRepaired(10);
	ft.takeDamage(71);
	ft.highFivesGuys();
}