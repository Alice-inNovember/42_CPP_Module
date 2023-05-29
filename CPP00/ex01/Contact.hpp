/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:40 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/29 13:13:05 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
# define Contact_H

# include <string>

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	number;
	std::string	secret;

	public:
	void		set_contct(std::string first_name, std::string last_name, std::string nick_name, std::string number, std::string secret);
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nick_name();
	std::string	get_number();
	std::string	get_secret();
};

#endif