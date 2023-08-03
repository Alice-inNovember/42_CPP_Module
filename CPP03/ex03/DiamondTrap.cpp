/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:30:03 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 16:12:26 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): _name(ClapTrap::_name) // private
{
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
{
	this->_name = _name;
	this->_hp = 100;
	_ep = 50;
	_ad = 20;
	ClapTrap::_name = _name + "_clap__name";
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj), _name(obj._name)
{
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	this->_name = obj._name;
	this->_ad = obj._ad;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	std::cout << "DiamondTrap operator = " << _name << " called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout	<< "This DiamondTrap name is " << this->_name << " and This ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}