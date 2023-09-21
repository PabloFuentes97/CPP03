#include "ClapTrap.hpp"

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#define COLOR_F "\033[0;33m"
#define RESET_F "\033[0m"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		virtual ~FragTrap(void);
		FragTrap &	operator=(FragTrap const & rhs);
		void highFivesGuys(void);
};

#endif