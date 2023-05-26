/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:40 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/26 12:59:18 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook::idx = 0;
}

void	PhoneBook::add_contact(std::string name, std::string number)
{
	if (PhoneBook::idx >= 8)
		PhoneBook::idx = 0;
	PhoneBook::contact[PhoneBook::idx].set_contct(name, number);
	PhoneBook::idx++;
}

std::string PhoneBook::find_name(std::string number)
{
	for (int i = 0; i < 8; i++)
	{
		if (PhoneBook::contact[i].get_number() == number)
			return PhoneBook::contact[i].get_name();
	}
	return (NULL);
}

std::string PhoneBook::find_number(std::string name)
{
	for (int i = 0; i < 8; i++)
	{
		if (PhoneBook::contact[i].get_name() == name)
			return PhoneBook::contact[i].get_number();
	}
	return (NULL);
}