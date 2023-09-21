#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct("paco");
	ScavTrap	st("pedro");

	std::cout << st.getEnergyPoints() << std::endl;
	ct.attack("pepe");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.attack("juan");
	ct.takeDamage(3);
	st.attack("federico");
	st.takeDamage(7);
	st.beRepaired(2);
	ct.beRepaired(1);
	ct.attack("manuel");
	st.takeDamage(6);
	st.guardGate();
	std::cout << st.getEnergyPoints() << std::endl;
}