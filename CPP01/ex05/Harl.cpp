/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:10:04 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/18 13:25:58 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	complainList[DEBUG].level = "DEBUG";
	complainList[DEBUG].func_ptr = &Harl::debug;
	complainList[INFO].level = "INFO";
	complainList[INFO].func_ptr = &Harl::info;
	complainList[WARNING].level = "WARNING";
	complainList[WARNING].func_ptr = &Harl::warning;
	complainList[ERROR].level = "ERROR";
	complainList[ERROR].func_ptr = &Harl::error;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger" << std::endl
		<< "I really do!" << std::endl
		<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl
		<< "If you did, I wouldn’t be asking for more!" << std::endl
		<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free." << std::endl
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now"
		<< std::endl << std::endl;
}

void	Harl::complain( std::string level )
{
	for (int i = 0; i < TOTAL_NUM_OF_LEVEL; i++)
	{
		if (complainList[i].level == level)
		{
			(this->*complainList[i].func_ptr)();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl << std::endl;
}