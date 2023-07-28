/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:32 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/28 15:59:25 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		ClapTrap(void);
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
		bool		canAction(int _ep);
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		virtual ~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& rhs);

		std::string const name() const;
		int ad() const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif