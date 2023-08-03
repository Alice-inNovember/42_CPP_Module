/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 16:30:56 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void Attack(ClapTrap &From, ClapTrap &To)
{
	From.attack(To.getName());
	To.takeDamage(From.getAd());
}

int main(void)
{
	std::cout << "==================================" << std::endl;
	{
		ClapTrap A("A");
		ClapTrap B("B");
	
		Attack(A, B);
		A.attackTo(B);
	}
	std::cout << "==================================" << std::endl;
	{
		ScavTrap a("a");
		ScavTrap b("b");

		a.guardGate();
		b.guardGate();
		for (int i = 0; i < 50; i++)
		{
			a.attackTo(b);
		}
		a.guardGate();
		b.guardGate();
	}
	std::cout << "==================================" << std::endl;
	{
		FragTrap a("a");
		FragTrap b("b");

		a.highFivesGuys();
		b.highFivesGuys();
	}
	std::cout << "==================================" << std::endl;
	{
		DiamondTrap dia("dia");

		dia.whoAmI();
	}
	std::cout << "==================================" << std::endl;
}