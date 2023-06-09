/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:19:02 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/10 12:42:47 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP


# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
};

#endif