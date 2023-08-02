#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->_name = _name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_ad = obj._ad;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_ad = obj._ad;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	std::cout << "ScavTrap operator = " << _name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->_hp || !this->_ep)
	{
		std::cout << "ScavTrap " << this->_name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has entered gate guard mode" << std::endl;
		this->_ep--;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_ep)
	{
		std::cout << "ScavTrap " << this->_name << " can not move..." << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->_name << " attacks " << target 
					<< ", causing " << this->_ad << " points of damage!"
					<< std::endl;
		this->_ep--;
	}
}
//https://techdebt.tistory.com/39