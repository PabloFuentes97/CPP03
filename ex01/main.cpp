#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("pedro");

	std::cout << st << std::endl;
	st.attack("federico");
	st.takeDamage(7);
	st.beRepaired(2);
	st.guardGate();
	return (0);
}