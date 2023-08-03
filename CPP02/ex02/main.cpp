/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:33:17 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 13:25:44 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	int a;

	a = 0;
	std::cout << ++(++a) << std::endl;
	std::cout << (++a)++ << std::endl;
	std::cout << (a++)++ << std::endl;

}