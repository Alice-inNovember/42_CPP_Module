/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:30:01 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/03 16:09:01 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
		DiamondTrap(void);
	public:
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap& src);
		virtual ~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap const& obj);
		void attack(std::string const& target);
		void whoAmI(void);
};

#endif