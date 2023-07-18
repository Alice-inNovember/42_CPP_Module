/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:08:49 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/18 13:18:45 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

enum level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	TOTAL_NUM_OF_LEVEL
};

class Harl;

typedef struct s_complain
{
	std::string	level;
	void (Harl::*func_ptr)(void);
} t_complain;

class Harl {

private:
	t_complain	complainList[TOTAL_NUM_OF_LEVEL];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl( void );
	void complain( std::string level );
};

#endif