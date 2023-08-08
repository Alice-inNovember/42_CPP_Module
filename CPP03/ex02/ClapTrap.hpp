/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:32 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:44:13 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

#define CLAP "\033[0;31m"
#define SCAV "\033[0;32m"
#define FRAG "\033[1;33m"
#define DIA "\033[1;34m"
#define NONE "\033[1;37m"

#define CREATE "[-CREATE-]"
#define CRECOPY "[CRE-COPY]"
#define DISTROY "[DIS-TROY]"
#define COPY "[--COPY--]"
#define NOEP "[--NOEP--]"
#define NOHP "[--NOHP--]"

class ClapTrap
{
   protected:
	ClapTrap(void);
	std::string _name;
	int _hp;
	int _ep;
	int _ad;
	bool canAction();

   public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	virtual ~ClapTrap(void);
	ClapTrap& operator=(ClapTrap const& rhs);

	std::string const getName() const;
	int getAd() const;
	virtual void attack(const std::string& target);
	void attackTo(ClapTrap& obj);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif