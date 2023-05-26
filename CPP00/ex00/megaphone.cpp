/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:12:31 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/26 10:26:48 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int idx = 0; av[i][idx]; idx++)
		{
			std::cout << (char)std::toupper(av[i][idx]);
		}
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}