/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:22:34 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:42:50 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)	//private
{
	std::cout << FRAG << CREATE << " FragTrap " << NONE << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << FRAG << CREATE << " FragTrap " << _name << NONE << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << FRAG << CRECOPY << " FragTrap " << _name << NONE << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	_name = obj._name;
	_ad = obj._ad;
	_hp = obj._hp;
	_ep = obj._ep;
	std::cout << FRAG << COPY << " FragTrap " << _name << NONE << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << FRAG << DISTROY << " FragTrap " << _name << NONE << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << FRAG << _name << " : Hooray! Give Me Five!" << NONE
			  << std::endl;
}
