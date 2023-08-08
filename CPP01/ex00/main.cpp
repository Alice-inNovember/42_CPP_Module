/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:15:43 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:41:27 by junlee2          ###   ########seoul.kr  */
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
	Zombie* zombie02 = newZombie("tester");

	randomChump("aaaa");
	zombie01.announce();
	zombie02->announce();
	test();
	delete zombie02;
}