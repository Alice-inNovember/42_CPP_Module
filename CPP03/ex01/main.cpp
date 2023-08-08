/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:42:42 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void Attack(ClapTrap& From, ClapTrap& To)
{
	From.attack(To.getName());
	To.takeDamage(From.getAd());
}

int main(void)
{
	ScavTrap a("a");
	ScavTrap b("b");

	std::cout << "==================================" << NONE << std::endl;
	a.guardGate();
	b.guardGate();
	std::cout << "==================================" << NONE << std::endl;
	for (int i = 0; i < 50; i++) {
		a.attackTo(b);
	}
	std::cout << "==================================" << NONE << std::endl;
	a.guardGate();
	b.guardGate();
	std::cout << "==================================" << NONE << std::endl;
}