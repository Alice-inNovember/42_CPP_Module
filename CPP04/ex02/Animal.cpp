/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 12:25:07 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	type = AANIMAL;
	std::cout << "Created " << AANIMAL << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	*this = src;
	std::cout << "Copy Created " << AANIMAL << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destroyed " << AANIMAL << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << AANIMAL << std::endl;
	return *this;
}

std::string const AAnimal::getType() const
{
	return type;
}
