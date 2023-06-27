/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:15:43 by junlee2           #+#    #+#             */
/*   Updated: 2023/06/27 16:36:38 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main()
{
	Zombie*	zombieArr;
	int		size = 5;
	
	zombieArr = zombieHorde(size, "zzombbie");

	for (int i = 0; i < size; i++)
		zombieArr[i].announce();

	delete [] zombieArr;
}
