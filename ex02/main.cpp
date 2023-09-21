#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ct("paco");
	ScavTrap	st("pedro");
	FragTrap	ft("pablo");

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
	ft.attack("raul");
	ft.takeDamage(40);
	ft.beRepaired(10);
	ft.takeDamage(61);
	ft.highFivesGuys();
}