/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:44:04 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void Attack(ClapTrap& From, ClapTrap& To)
{
	From.attack(To.getName());
	To.takeDamage(From.getAd());
}

int main(void)
{
	std::cout << "==================================" << NONE << std::endl;
	{
		ClapTrap A("A");
		ClapTrap B("B");

		Attack(A, B);
		A.attackTo(B);
	}
	std::cout << "==================================" << NONE << std::endl;
	{
		ScavTrap a("a");
		ScavTrap b("b");

		a.guardGate();
		b.guardGate();
		for (int i = 0; i < 50; i++) {
			a.attackTo(b);
		}
		a.guardGate();
		b.guardGate();
	}
	std::cout << "==================================" << NONE << std::endl;
	{
		FragTrap a("a");
		FragTrap b("b");

		a.highFivesGuys();
		b.highFivesGuys();
	}
	std::cout << "==================================" << NONE << std::endl;
	{
		DiamondTrap dia("dia");

		dia.whoAmI();
	}
	std::cout << "==================================" << NONE << std::endl;
}