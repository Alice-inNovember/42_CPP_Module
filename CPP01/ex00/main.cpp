/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42seoul.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:15:43 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/26 04:25:03 by codespace        ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void test()
{
	Zombie z("01");

	z.announce();
}

int main()
{
	Zombie zombie01("junlee2");
	Zombie *zombie02 = newZombie("tester");

	randomChump("aaaa");	
	zombie01.announce();
	zombie02->announce();
	test();
	delete zombie02;
}