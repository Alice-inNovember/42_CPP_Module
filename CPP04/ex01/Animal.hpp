/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:52 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:26:52 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

#define ANIMAL "Animal"
#define ANIMALSOUND ""

#include "string"

class Animal
{
   protected:
	std::string type;

   public:
	Animal(void);
	Animal(const Animal& src);
	virtual ~Animal(void);
	Animal& operator=(Animal const& obj);

	std::string const getType() const;
	virtual void makeSound() const;
};

#endif