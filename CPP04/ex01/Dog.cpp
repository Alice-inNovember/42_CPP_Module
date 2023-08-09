/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:33 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 13:48:51 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = DOG;
	brain = new Brain;
	std::cout << "Created " << DOG << std::endl;
}

Dog::Dog(const Dog& src)
{
	brain = new Brain;
	*this = src;
	std::cout << "Copy Created " << DOG << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Destroyed " << DOG << std::endl;
}

Dog& Dog::operator=(Dog const& obj)
{
	if (this != &obj) {
		type = obj.type;
		*brain = *obj.brain;
	}
	std::cout << "Copyed " << DOG << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << type << " : " << DOGSOUND << std::endl;
}

void Dog::brainStorm(std::string idea)
{
	brain->addIdea(idea);
}

void Dog::talkIdeas()
{
	std::cout << type << " : ";
	brain->printIdea();
}