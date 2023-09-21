#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("paco");
	ClapTrap	ct2("pedro");
	ClapTrap	ct3(ct);

	ct.attack("pepe");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.attack("juan");
	ct.takeDamage(3);
	ct3.takeDamage(2);
	ct2.attack("federico");
	ct2.takeDamage(7);
	ct2.beRepaired(2);
	ct.beRepaired(1);
	ct.attack("manuel");
	ct2 = ct;
	ct2.takeDamage(6);
	ct3.attack("jose");
	
}