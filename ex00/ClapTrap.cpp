#include "ClapTrap.hpp"

	ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
	{
		std::cout << COLOR_C << "Default ClapTrap Constructor" << RESET_C << std::endl;
		/*this->_hitPoints = 10;
		this->_energyPoints = 10;
		this->_attackDamage = 0;*/
	}
	
	ClapTrap::ClapTrap(std::string to_name) : _name(to_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
	{
		std::cout << COLOR_C << "Constructor ClapTrap with name" << RESET_C << std::endl;
		/*this->_hitPoints = 10;
		this->_energyPoints = 10;
		this->_attackDamage = 0;*/
	}
	
	ClapTrap::ClapTrap(ClapTrap const & src)
	{
		std::cout << COLOR_C << "Copy ClapTrap Constructor" << RESET_C << std::endl;
		*this = src;
		return ;
	}

	ClapTrap::~ClapTrap(void)
	{
		std::cout << COLOR_C << "ClapTrap Destructor" << RESET_C << std::endl;
	}

	std::string	ClapTrap::getName(void) const
	{
		return(this->_name);
	}

	int	ClapTrap::getHitPoints(void) const
	{
		return (this->_hitPoints);
	}

	int	ClapTrap::getEnergyPoints(void) const
	{
		return (this->_energyPoints);
	}
	int	ClapTrap::getAttackDamage(void) const
	{
		return (this->_attackDamage);
	}

	ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
	{
		std::cout << COLOR_C << "ClapTrap assignation operator called" << RESET_C << std::endl;
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		return (*this);
	}

	void ClapTrap::attack(const std::string& target)
	{
		if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
			return ;
		std::cout << COLOR_C << "ClapTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attackDamage << " points of damage!" << RESET_C << std::endl;
		this->_energyPoints--;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		if (this->_hitPoints <= 0)
			return ;
		this->_hitPoints-= amount;
		std::cout << COLOR_C << "ClapTrap " << this->_name << " took " << amount
		<< " points of damage! Current health is " << this->_hitPoints << RESET_C << std::endl;
		if (this->_hitPoints < 0)
			std::cout << COLOR_C << "Poor ClapTrap " << this->_name << " is dead!" << RESET_C << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
			return ;
		this->_hitPoints+= amount;
		this->_energyPoints--;
		std::cout << COLOR_C << "ClapTrap " << this->_name << " repaired himself by " << amount
			<< " points! Current health is " << this->_hitPoints << RESET_C << std::endl;
	}

	std::ostream &operator<<(std::ostream &o, const ClapTrap &src)
	{
		o << COLOR_C;
		o << "Name: " << src.getName() << std::endl;
		o << "Hit Points: " << src.getHitPoints() << std::endl;
		o << "Energy Points: " << src.getEnergyPoints() << std::endl;
		o << "AttackDamage: " << src.getAttackDamage();
		o << RESET_C;
		return (o);
	}
	