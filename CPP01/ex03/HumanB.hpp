/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:19:00 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/10 12:51:14 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();
};