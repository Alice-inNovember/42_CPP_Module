/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:28:17 by junlee2           #+#    #+#             */
/*   Updated: 2023/06/27 16:55:58 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << "." << idx << " : BraiiiiiiinnnzzzZ.."<< std::endl;
}

void	Zombie::initialize(int idx, std::string name)
{
	this->idx = idx;
	this->name = name;
}

Zombie::Zombie()
{
	idx = -1;
	name = "<No Name>";
	std::cout << "Create " << name << "." << idx << "(Zombie)" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << "." << idx << "(Zombie" << ") has died" << std::endl;
}