/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 18:36:48 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void Attack(ClapTrap &From, ClapTrap &To)
{
	From.attack(To.getName());
	To.takeDamage(From.getAd());
}

int main(void)
{
	FragTrap a("a");
	FragTrap b("b");

	std::cout << "==================================" << NONE << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << "==================================" << NONE << std::endl;
}