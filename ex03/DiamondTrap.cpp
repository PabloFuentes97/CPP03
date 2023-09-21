#include "DiamondTrap.hpp"

	DiamondTrap::DiamondTrap(void)
	{
		std::cout << COLOR_D << "Default DiamondTrap Constructor" << RESET_D << std::endl;
		this->_name = "default";
		this->ClapTrap::_name = this->_name + "_clap_name";
		this->_hitPoints = FragTrap::_hitPoints;
		this->_energyPoints = ScavTrap::_energyPoints;
		this->_attackDamage = FragTrap::_attackDamage;
	}
	
	DiamondTrap::DiamondTrap(std::string to_name)
	{
		std::cout << COLOR_D << "Constructor DiamondTrap with name" << RESET_D << std::endl;
		this->_name = to_name;
		ClapTrap::_name = this->_name + "_clap_name";
		this->_hitPoints = FragTrap::_hitPoints;
		this->_energyPoints = ScavTrap::_energyPoints;
		this->_attackDamage = FragTrap::_attackDamage;
	}
	
	DiamondTrap::DiamondTrap(DiamondTrap const & src)
	{
		std::cout << COLOR_D << "Copy DiamondTrap Constructor" << RESET_D << std::endl;
		*this = src;
		return ;
	}

	DiamondTrap::~DiamondTrap(void)
	{
		std::cout << COLOR_D << "DiamondTrap Destructor" << RESET_D << std::endl;
	}

	DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
	{
		std::cout << COLOR_D << "DiamondTrap assignation operator called" << RESET_D << std::endl;
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		return (*this);
	}
	
	void	DiamondTrap::whoAmI(void)
	{
		std::cout << COLOR_D << "My name is " << this->_name
				<< " and my ClapTrap name is " << this->ClapTrap::_name << "!" << RESET_D << std::endl;
	}

	std::string	const &DiamondTrap::getName(void) const
	{
		return (this->_name);
	}

	std::ostream &operator<<(std::ostream &o, const DiamondTrap &src)
	{
		DiamondTrap &d = const_cast<DiamondTrap &>(src);
		ClapTrap &srcC = dynamic_cast<ClapTrap &>(d);
		
		o << srcC << std::endl;
		o << COLOR_D;
		o << "Diamond Trap name: " << src.getName() << std::endl;
		o << RESET_D;
		return (o);
	}
