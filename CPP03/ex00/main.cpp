/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 13:32:59 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void Attack(ClapTrap &From, ClapTrap &To)
{
	From.attack(To.getName());
	To.takeDamage(From.getAd());
}

int main(void)
{
	ClapTrap A("A");
	ClapTrap B("B");

	Attack(A, B);
	A.attackTo(B);
}