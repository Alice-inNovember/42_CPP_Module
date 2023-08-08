/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:41:47 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	type = WRONGCAT;
	std::cout << "Created " << WRONGCAT << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	type = src.type;
	std::cout << "Copy Created " << WRONGCAT << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destroyed " << WRONGCAT << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << WRONGCAT << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << type << " : " << WRONGCATSOUND << std::endl;
}