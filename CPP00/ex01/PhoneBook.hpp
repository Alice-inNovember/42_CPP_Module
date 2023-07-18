/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:41 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/18 14:18:10 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_H
# define PhoneBook_H

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
	int			idx;
	Contact		contact[8];

	public:
	PhoneBook();
	int			get_idx();
	void	add_contact(std::string first_name, std::string last_name, std::string nick_name, std::string number, std::string secret);
	Contact	*find_contact(int idx);
};

#endif