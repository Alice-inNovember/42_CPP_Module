/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:59:54 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 13:49:15 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#define CAT "Cat"
#define CATSOUND "Meow~"

class Cat : public Animal
{
   private:
	Brain* brain;

   public:
	Cat(void);
	Cat(const Cat& src);
	virtual ~Cat(void);
	Cat& operator=(Cat const& obj);
	void makeSound() const;
	void brainStorm(std::string idea);
	void talkIdeas();
};

#endif