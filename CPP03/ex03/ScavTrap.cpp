/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:22:34 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:44:00 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)	//private
{
	std::cout << SCAV << CREATE << " ScavTrap " << _name << NONE << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << SCAV << CREATE << " ScavTrap " << _name << CREATE << NONE
			  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << SCAV << CRECOPY << " ScavTrap " << _name << NONE << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << SCAV << COPY << " ScavTrap " << _name << NONE << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SCAV << DISTROY << " ScavTrap " << _name << NONE << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!canAction())
		return;
	std::cout << SCAV << "ScavTrap " << _name << " has entered gate guard mode"
			  << NONE << std::endl;
	_ep--;
}

void ScavTrap::attack(const std::string& target)
{
	if (!canAction())
		return;
	std::cout << SCAV << "ScavTrap " << _name << " attacks " << target
			  << ", causing " << _ad << " points of damage!" << NONE
			  << std::endl;
	_ep--;
}
