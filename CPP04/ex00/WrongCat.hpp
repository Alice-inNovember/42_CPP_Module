/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:59:54 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:39:19 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

#define WRONGCAT "WrongCat"
#define WRONGCATSOUND "Meow~"

class WrongCat : public WrongAnimal
{
   private:
   public:
	WrongCat(void);
	WrongCat(const WrongCat& src);
	virtual ~WrongCat(void);
	WrongCat& operator=(WrongCat const& obj);
	void makeSound() const;
};

#endif