/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:35 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:29:35 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

#define DOG "Dog"
#define DOGSOUND "Bark!"

class Dog : public Animal
{
   private:
   public:
	Dog(void);
	Dog(const Dog& src);
	virtual ~Dog(void);
	Dog& operator=(Dog const& obj);
	void makeSound() const;
};

#endif