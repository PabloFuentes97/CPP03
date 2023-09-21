#pragma once

#ifndef	DiamondTrap_CPP
#define	DiamondTrap_CPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define COLOR_D "\033[0;31m"
#define RESET_D "\033[0m"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		virtual ~DiamondTrap(void);
		DiamondTrap &	operator=(DiamondTrap const & rhs);
		std::string	const &getName(void) const;
		void 	whoAmI();
};

std::ostream &operator<<(std::ostream &o, DiamondTrap &src);

#endif