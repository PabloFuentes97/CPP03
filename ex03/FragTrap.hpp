#pragma once
#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define COLOR_F "\033[0;33m"
#define RESET_F "\033[0m"

class FragTrap : virtual public  ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap &	operator=(FragTrap const & rhs);
		void highFivesGuys(void);
};

#endif