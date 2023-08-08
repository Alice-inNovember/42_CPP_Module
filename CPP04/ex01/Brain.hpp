/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:07:33 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 20:29:46 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain
{
   private:
	static const int size = 100;
	std::string ideas[size];

   public:
	Brain(void);
	Brain(const Brain& src);
	virtual ~Brain(void);
	Brain& operator=(Brain const& obj);
};

#endif