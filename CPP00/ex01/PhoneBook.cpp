/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:40 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/29 13:22:38 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstddef>

PhoneBook::PhoneBook()
{
	PhoneBook::idx = 0;
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nick_name, std::string number, std::string secret)
{
	if (PhoneBook::idx >= 8)
		PhoneBook::idx = 0;
	PhoneBook::contact[PhoneBook::idx].set_contct(first_name, last_name, nick_name, number, secret);
	PhoneBook::idx++;
}

Contact	*PhoneBook::find_contact(int idx)
{
	if (idx < 0 || idx > 7)
		return NULL;
	return &PhoneBook::contact[idx];
}