/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:30:03 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 18:54:33 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): _name(ClapTrap::_name) // private
{
	ClapTrap::_name = _name + "_clap_name";
	std::cout << DIA << CREATE << " DiamondTrap " << _name << NONE << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	ClapTrap::_name = _name + "_clap_name";
	std::cout << DIA << CREATE << " DiamondTrap " << _name << NONE << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj), _name(obj._name)
{
	std::cout << DIA << CRECOPY << " DiamondTrap " << _name << NONE << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << DIA << COPY << " DiamondTrap " << _name << NONE << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << DIA << DISTROY << " DiamondTrap " << _name << NONE << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << DIA << "This DiamondTrap name is " << _name << " and This ClapTrap name is " << ClapTrap::_name << NONE << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}