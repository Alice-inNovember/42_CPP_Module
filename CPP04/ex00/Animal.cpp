/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:43:39 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {}

Animal::Animal(const Animal& src) {}

Animal::~Animal(void) {}

Animal& Animal::operator=(Animal const& obj)
{
	if (this != &obj) {}
	return *this;
}