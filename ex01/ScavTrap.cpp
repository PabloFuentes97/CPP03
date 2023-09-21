#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void)
	{
		std::cout << COLOR_S << "Default ScavTrap Constructor" << RESET_S << std::endl;
		this->_hitPoints = 100;
		this->_energyPoints = 50;
		this->_attackDamage = 20;
		this->_gateKeeper = false;
	}
	
	ScavTrap::ScavTrap(std::string to_name)
	{
		std::cout << COLOR_S << "Constructor ScavTrap with name" << RESET_S << std::endl;
		this->_name = to_name;
		this->_hitPoints = 100;
		this->_energyPoints = 50;
		this->_attackDamage = 20;
		this->_gateKeeper = false;
	}
	
	ScavTrap::ScavTrap(ScavTrap const & src)
	{
		std::cout << COLOR_S << "Copy ScavTrap Constructor" << RESET_S << std::endl;
		*this = src;
		return ;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << COLOR_S << "ScavTrap Destructor" << RESET_S << std::endl;
	}

	ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
	{
		std::cout << COLOR_S << "ScavTrap assignation operator called" << RESET_S << std::endl;
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_gateKeeper = rhs._gateKeeper;
		return (*this);
	}

	void ScavTrap::attack(const std::string& target)
	{
		if (this->_hitPoints < 0 || this->_energyPoints < 0)
			return ;
		std::cout << COLOR_S << "ScavTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attackDamage << " points of damage!" << RESET_S << std::endl;
		this->_energyPoints--;
	}

	void ScavTrap::guardGate()
	{
		if (this->_hitPoints <= 0)
			return ;		
		if (this->_gateKeeper == false)
		{
			std::cout << COLOR_S << "ScavTrap " << this->_name << " is now in Gate keeper mode" << RESET_S << std::endl;
			this->_gateKeeper = true;
		}
		else
			std::cout << COLOR_S << "ScavTrap " << this->_name << " was already in Gate keeper mode" << RESET_S << std::endl;
		
	}