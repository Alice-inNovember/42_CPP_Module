/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:38 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:40:01 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_contct(std::string first_name, std::string last_name,
						 std::string nick_name, std::string number,
						 std::string secret)
{
	Contact::first_name = first_name;
	Contact::last_name = last_name;
	Contact::nick_name = nick_name;
	Contact::number = number;
	Contact::secret = secret;
}

std::string Contact::get_first_name()
{
	return (Contact::first_name);
}

std::string Contact::get_last_name()
{
	return (Contact::last_name);
}

std::string Contact::get_nick_name()
{
	return (Contact::nick_name);
}

std::string Contact::get_number()
{
	return (Contact::number);
}

std::string Contact::get_secret()
{
	return (Contact::secret);
}