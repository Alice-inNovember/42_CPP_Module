/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:35 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/28 16:06:08 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0){}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	this->_name = src._name;
	this->_ad = src._ad;
	this->_ep = src._ep;
	this->_hp = src._hp;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has removed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_ad = rhs._ad;
		this->_ep = rhs._ep;
		this->_hp = rhs._hp;
	}
	return *this;
}

bool ClapTrap::canAction(int _ep)
{
	if (this->_ep < _ep)
	{
		std::cout << "ClapTrap Has Not Enough Energy points to Action" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (!canAction(1))
		return;
	_ep -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _ad << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " has already died" << std::endl;
		return;
	}
	_hp -= amount;
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canAction(1))
		return;
	_ep -= 1;
	_hp += amount;
	std::cout << " ClapTrap " << _name << " Repaired him self " << amount << "HitPoints" << std::endl;
}

std::string const ClapTrap::name() const
{
	return _name;
}

int ClapTrap::ad() const
{
	return _ad;
}
