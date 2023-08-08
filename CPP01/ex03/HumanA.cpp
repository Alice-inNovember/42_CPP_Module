/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:19:03 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:41:44 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& new_weapon)
	: weapon(new_weapon), name(name)
{}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType()
			  << std::endl;
}