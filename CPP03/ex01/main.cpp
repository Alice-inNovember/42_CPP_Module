/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:52:37 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/28 16:06:35 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void Attack(ClapTrap &From, ClapTrap &To)
{
	From.attack(To.name());
	To.takeDamage(From.ad());
}

int main(void)
{
	ClapTrap A("A");
	ClapTrap B("B");

	Attack(A, B);
}