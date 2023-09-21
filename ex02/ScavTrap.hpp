#pragma once
#ifndef	SCAVTRAP_CPP
#define	SCAVTRAP_CPP
#include "ClapTrap.hpp"

#define COLOR_S "\033[0;32m"
#define RESET_S "\033[0m"

class ScavTrap : virtual public ClapTrap
{
	private:
		bool	_gateKeeper;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap &	operator=(ScavTrap const & rhs);
		void			attack(const std::string& target);
		void 			guardGate();
};

#endif