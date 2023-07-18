/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:59:09 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/14 16:15:47 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "-------------------------" << std::endl;
	std::cout << "Origin    ADD : " << &string << std::endl;
	std::cout << "Pointer   ADD : " << stringPTR << std::endl;
	std::cout << "Reference ADD : " << &stringREF << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Origin    VAL : " << string << std::endl;
	std::cout << "Pointer   VAL : " << *stringPTR << std::endl;
	std::cout << "Reference VAL : " << stringREF << std::endl;
	std::cout << "-------------------------" << std::endl;
}