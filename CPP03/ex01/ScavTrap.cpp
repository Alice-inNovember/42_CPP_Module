#include "ScavTrap.hpp"
#include <string>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	//불릴 일 없음
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap " << _name << "constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Distructor calld" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}