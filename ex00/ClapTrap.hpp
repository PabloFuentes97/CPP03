#include <iostream>
#include <string>

#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#define COLOR_C "\033[0;34m"
#define RESET_C "\033[0m"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap(void);
		ClapTrap &	operator=(ClapTrap const & rhs);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
};

std::ostream &operator<<(std::ostream &o, const ClapTrap &src);

#endif