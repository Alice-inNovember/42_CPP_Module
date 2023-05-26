/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:28:40 by junlee2           #+#    #+#             */
/*   Updated: 2023/05/26 10:46:27 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
# define Contact_H

# include <string>

class Contact
{
	private:
	std::string	name;
	std::string	number;

	public:
	void		set_contct(std::string name, std::string number);
	std::string	get_name();
	std::string	get_number();
};

#endif