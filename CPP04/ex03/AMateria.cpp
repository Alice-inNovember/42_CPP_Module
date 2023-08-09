/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:27:18 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 14:22:39 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const AMateria& src) {}

AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(AMateria const& obj)
{
	if (this != &obj) {}
	return *this;
}

void AMateria::use(ICharacter& target) {}