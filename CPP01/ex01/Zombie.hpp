/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:05:25 by junlee2           #+#    #+#             */
/*   Updated: 2023/06/11 20:44:14 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
#include <string>

class Zombie
{
	private:
	std::string name;
	int _idx;

	static int idx;

	public:
	void	setname(std::string);
	void	announce(void);

	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif