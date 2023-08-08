/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:07:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 21:07:10 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {}

Brain::Brain(const Brain& src) {}

Brain::~Brain(void) {}

Brain& Brain::operator=(Brain const& obj)
{
	if (this != &obj) {
		for (int i = 0; i < size; i++) {
			ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}