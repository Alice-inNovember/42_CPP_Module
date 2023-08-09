/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:07:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 12:15:41 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	idx = 0;
	std::cout << "Created " << BRAIN << std::endl;
}

Brain::Brain(const Brain& src)
{
	*this = src;
	std::cout << "Copy Created " << BRAIN << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destroyed " << BRAIN << std::endl;
}

Brain& Brain::operator=(Brain const& obj)
{
	if (this != &obj) {
		for (int i = 0; i < size; i++) {
			ideas[i] = obj.ideas[i];
		}
	}
	idx = obj.idx;
	std::cout << "Copyed " << BRAIN << std::endl;
	return *this;
}

void Brain::printIdea()
{
	if (idx == 0) {
		std::cout << "Has No Idea" << std::endl;
		return;
	}
	for (int i = 0; i < idx; i++) {
		std::cout << ideas[i] << " ";
	}
	std::cout << std::endl;
}

void Brain::addIdea(std::string idea)
{
	if (idx >= size) {
		std::cout << "Brain is Full" << std::endl;
		return;
	}
	ideas[idx] = idea;
	idx++;
}