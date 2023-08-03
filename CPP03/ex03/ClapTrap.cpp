/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:35 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 16:28:49 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	_name = src._name;
	_ad = src._ad;
	_ep = src._ep;
	_hp = src._hp;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has removed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_ad = rhs._ad;
		_ep = rhs._ep;
		_hp = rhs._hp;
	}
	std::cout << "ClapTrap copy operator called" << std::endl;
	return *this;
}

bool ClapTrap::canAction()
{
	if (!_ep)
	{
		std::cout << "ClapTrap " << _name << " Has Not Enough Energy points to Action" << std::endl;
		return false;
	}
	if (!_hp)
	{
		std::cout << "ClapTrap " << _name << " Has Not Enough Hit points to Action" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (!canAction())
		return;
	_ep -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _ad << " points of damage!" << std::endl;
}

void ClapTrap::attackTo(ClapTrap &obj)
{
	attack(obj.getName());
	obj.takeDamage(_ad);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " has already died" << std::endl;
		return;
	}
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " has " << _hp << " HitPoint" << std::endl;
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canAction())
		return;
	_ep -= 1;
	_hp += amount;
	std::cout << " ClapTrap " << _name << " Repaired him self " << amount << "HitPoints" << std::endl;
}

std::string const ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getAd() const
{
	return _ad;
}
