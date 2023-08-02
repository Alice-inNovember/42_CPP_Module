/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:33:17 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/02 11:45:30 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a.operator++() << std::endl;

	std::cout << b << std::endl;

	std::cout << (a != b) << std::endl;

	std::cout << (a.operator==(b)) << std::endl;
	
	std::cout << (a > b) << std::endl;
	
	std::cout << (a.operator<(b)) << std::endl;

	operator<<(std::cout, a) << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}