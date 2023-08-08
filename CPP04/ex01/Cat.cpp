/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:42:05 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = CAT;
	std::cout << "Created " << CAT << std::endl;
}

Cat::Cat(const Cat& src)
{
	type = src.type;
	std::cout << "Copy Created " << CAT << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destroyed " << CAT << std::endl;
}

Cat& Cat::operator=(Cat const& obj)
{
	if (this != &obj) {
		type = obj.type;
	}
	std::cout << "Copyed " << CAT << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << type << " : " << CATSOUND << std::endl;
}