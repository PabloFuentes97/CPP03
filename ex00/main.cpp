#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("paco");
	ClapTrap	ct2("pedro");
	ClapTrap	ct3(ct);

	std::cout << "CT: \n" << ct << std::endl;
	std::cout << "CT2: \n" << ct2 << std::endl;
	std::cout << "CT3: \n" << ct3 << std::endl;
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
	std::cout << "CT: \n" << ct2 << std::endl;
	std::cout << "CT2: \n" << ct2 << std::endl;
	ct2.takeDamage(6);
	ct3.attack("jose");
	
}