#include "FragTrap.hpp"

	FragTrap::FragTrap(void)
	{
		std::cout << COLOR_F << "Default FragTrap Constructor" << RESET_F << std::endl;
		this->_hitPoints = 100;
		if (this->_energyPoints == 10)
			this->_energyPoints = 100;
		this->_attackDamage = 30;
	}
	
	FragTrap::FragTrap(std::string to_name)
	{
		std::cout << COLOR_F << "Constructor FragTrap with name" << RESET_F << std::endl;
		this->_name = to_name;
		this->_hitPoints = 100;
		if (this->_energyPoints == 10)
			this->_energyPoints = 100;
		this->_attackDamage = 30;
	}
	
	FragTrap::FragTrap(FragTrap const & src)
	{
		std::cout << COLOR_F << "Copy FragTrap Constructor" << RESET_F << std::endl;
		*this = src;
		return ;
	}

	FragTrap::~FragTrap(void)
	{
		std::cout << COLOR_F << "FragTrap Destructor" << RESET_F << std::endl;
	}

	FragTrap &	FragTrap::operator=(FragTrap const & rhs)
	{
		std::cout << COLOR_F << "FragTrap assignation operator called" << RESET_F << std::endl;
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		return (*this);
	}

	void FragTrap::highFivesGuys(void)
	{
		std::cout << COLOR_F << "FragTrap " << this->_name << " requests a high fives!" << RESET_F << std::endl;
	}