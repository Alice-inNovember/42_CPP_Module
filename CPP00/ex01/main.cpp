/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:56:13 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/26 13:02:00 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook *get_PhoneBook()
{
	static PhoneBook *phonebook;

	if (phonebook == 0)
		phonebook = new PhoneBook;
	return phonebook;
}

void	Menu()
{
	PhoneBook *phonebook = get_PhoneBook();
}

int main()
{
	PhoneBook *phonebook = get_PhoneBook();
}