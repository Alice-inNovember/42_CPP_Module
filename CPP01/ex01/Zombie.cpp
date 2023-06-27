/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:28:17 by junlee2           #+#    #+#             */
/*   Updated: 2023/06/11 20:41:42 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstddef>

void	Zombie::announce(void)
{
	std::cout << this->name << ": : BraiiiiiiinnnzzzZ.."<< std::endl;
}

Zombie::Zombie() : _idx(idx++)
{
	std::cout << "Create Zombie" << _idx << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name <<"(Zombie" << _idx << ") has died" << std::endl;
}