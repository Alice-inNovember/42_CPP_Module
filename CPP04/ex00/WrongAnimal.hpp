/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:52 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:37:29 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#define WRONGANIMAL "WrongAnimal"
#define WRONGANIMALSOUND ""

#include "string"

class WrongAnimal
{
   protected:
	std::string type;

   public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(WrongAnimal const& obj);

	std::string const getType() const;
	void makeSound() const;
};

#endif