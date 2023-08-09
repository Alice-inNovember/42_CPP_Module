/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 12:32:37 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = CAT;
	brain = new Brain;
	std::cout << "Created " << CAT << std::endl;
}

Cat::Cat(const Cat& src)
{
	brain = new Brain;
	*this = src;
	std::cout << "Copy Created " << CAT << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Destroyed " << CAT << std::endl;
}

Cat& Cat::operator=(Cat const& obj)
{
	if (this != &obj) {
		type = obj.type;
		*brain = *obj.brain;
	}
	std::cout << "Copyed " << CAT << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << type << " : " << CATSOUND << std::endl;
}

void Cat::brainStorm(std::string idea)
{
	brain->addIdea(idea);
}

void Cat::talkIdeas()
{
	std::cout << type << " : ";
	brain->printIdea();
}