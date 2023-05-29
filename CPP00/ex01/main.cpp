/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:56:13 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/29 15:08:18 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	get_input(std::string say)
{
	std::string input;

	while(1)
	{
		std::cout << std::endl;
		std::cout << say << " : ";
		std::getline(std::cin, input);
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cout << "You have entered wrong input" << std::endl;
		}
		if(!std::cin.fail())
			break;
	}
	return input;
}

void	add(PhoneBook *phonebook)
{
	std::cout << std::endl;
	phonebook->add_contact(\
	get_input("first_name"), \
	get_input("last_name"), \
	get_input("nick_name"), \
	get_input("number"), \
	get_input("secret"));
}

void	printer(const std::string &str)
{
	if(str.length() == 0)
	{
		std::cout.width(10);
		std::cout << std::right << "None";
	}
	else if(str.length() <= 10)
	{
		std::cout.width(10);
		std::cout << std::right << str;
	}
	else
	{
		std::cout.width(9);
		std::cout << std::right << str.substr(0, 9) << ".";
	}
}

void	print_contact_idx(Contact *contact)
{
	printer(contact->get_first_name());
	std::cout << "|";
	printer(contact->get_last_name());
	std::cout << "|";
	printer(contact->get_nick_name());
	std::cout << "|";
	printer(contact->get_number());
	std::cout << "|";
	printer(contact->get_secret());
	std::cout << std::endl;
}

void	print_contact(Contact *contact)
{
	std::cout << "First name : " << contact->get_first_name() << std::endl;
	std::cout << "Last  name : " << contact->get_last_name() << std::endl;
	std::cout << "Nick  name : " << contact->get_nick_name() << std::endl;
	std::cout << "Number     : " << contact->get_number() << std::endl;
	std::cout << "Secret     : " << contact->get_secret() << std::endl;
}

void	search(PhoneBook *phonebook)
{
	int	input;

	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
		print_contact_idx(phonebook->find_contact(i));
	while(true)
	{
		std::cout << "===================" << std::endl;
		std::cout << "[0]\texit" << std::endl;
		std::cout << "[1 ~ 8]\tinfo" << std::endl;
		std::cout << "===================" << std::endl;
		std::cout << "input : ";
		std::cin >> input;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "You have entered wrong input" << std::endl;
			continue;
		}
		std::cin.ignore();
		if (input == 0)
			return;
		else if(input > 0 && input <= 8)
		{
			print_contact(phonebook->find_contact(input));
			std::cout << std::endl;
			continue;
		}
		std::cout << "You have entered wrong input" << std::endl;
	}
}

void	Menu(PhoneBook *phonebook)
{
	std::string input;

	while(true)
	{
		std::cout << "==== Main Menu ====" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "===================" << std::endl;
		std::cout << "input : ";
		std::getline(std::cin, input);
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "You have entered wrong input" << std::endl;
			continue;
		}
		if (input == "ADD")
			add(phonebook);
		else if (input == "SEARCH")
			search(phonebook);
		else if (input == "EXIT")
			return;
		else
		{
			std::cout << "You have entered wrong input" << std::endl;
			continue;
		}
	}
}

int main()
{
	PhoneBook phonebook;
	Menu(&phonebook);
}