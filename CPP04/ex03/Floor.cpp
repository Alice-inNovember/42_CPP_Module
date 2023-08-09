/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:53:52 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 15:15:53 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"
#include <iostream>
#include "AMateria.hpp"

Floor::Floor(void)
{
	instance = this;
	head.materia = 0;
	head.next = 0;
}

Floor::Floor(const Floor& src) {}

Floor& Floor::operator=(Floor const& obj)
{
	if (this != &obj) {}
	return *this;
}

Floor::~Floor(void)
{
	t_obj* obj;
	obj = head.next;
	while (obj) {
		t_obj* temp = obj->next;
		delete obj->materia;
		delete obj;
		obj = temp;
	}
	head.materia = 0;
	head.next = 0;
}

Floor* Floor::FindFloor()
{
	if (instance)
		return instance;
	return new Floor;
}

void Floor::addToFloor(AMateria* materia)
{
	t_obj* obj;
	obj = &head;

	while (obj->next) {
		obj = obj->next;
	}
	t_obj* newObj = new t_obj;
	newObj->materia = materia;
	newObj->next = 0;
	obj->next = newObj;
}

AMateria* Floor::getFromFloor()
{
	t_obj* obj;
	t_obj* lastObj;
	AMateria* materia;
	obj = &head;

	if (head.next == 0) {
		std::cout << "The Floor is empty" << std::endl;
		return NULL;
	}
	while (obj->next) {
		lastObj = obj;
		obj = obj->next;
	}
	materia = obj->materia;
	delete obj;
	lastObj->next = 0;
	return materia;
}