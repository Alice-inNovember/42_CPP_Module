/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:33 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:42:00 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = DOG;
	std::cout << "Created " << DOG << std::endl;
}

Dog::Dog(const Dog& src)
{
	type = src.type;
	std::cout << "Copy Created " << DOG << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destroyed " << DOG << std::endl;
}

Dog& Dog::operator=(Dog const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << DOG << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << type << " : " << DOGSOUND << std::endl;
}