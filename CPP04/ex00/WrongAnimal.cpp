/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:41:56 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	type = WRONGANIMAL;
	std::cout << "Created " << WRONGANIMAL << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	type = src.type;
	std::cout << "Copy Created " << WRONGANIMAL << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destroyed " << WRONGANIMAL << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << WRONGANIMAL << std::endl;
	return *this;
}

std::string const WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " : " << WRONGANIMALSOUND << std::endl;
}