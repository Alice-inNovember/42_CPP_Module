/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:38 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/26 10:36:39 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_contct(std::string name, std::string number)
{
	Contact::name = name;
	Contact::number = number;
}

std::string	Contact::get_name()
{
	return (Contact::name);
}

std::string Contact::get_number()
{
	return (Contact::number);
}