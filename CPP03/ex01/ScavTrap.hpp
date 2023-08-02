#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		virtual ~ScavTrap(void);
		ScavTrap& operator=(ScavTrap const& rhs);
		void guardGate(void);
		void attack(std::string const&target);
};

#endif