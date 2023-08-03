/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:22:34 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 14:53:09 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) //private
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << "ScavTrap operator = " << _name << " called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!canAction())
		return;
	std::cout << "ScavTrap " << _name << " has entered gate guard mode" << std::endl;
	_ep--;
}

void ScavTrap::attack(const std::string &target)
{
	if (!canAction())
		return;
	std::cout	<< "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
}
