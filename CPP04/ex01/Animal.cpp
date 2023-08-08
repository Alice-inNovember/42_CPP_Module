/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:42:12 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	type = ANIMAL;
	std::cout << "Created " << ANIMAL << std::endl;
}

Animal::Animal(const Animal& src)
{
	type = src.type;
	std::cout << "Copy Created " << ANIMAL << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destroyed " << ANIMAL << std::endl;
}

Animal& Animal::operator=(Animal const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << ANIMAL << std::endl;
	return *this;
}

std::string const Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << type << " : " << ANIMALSOUND << std::endl;
}