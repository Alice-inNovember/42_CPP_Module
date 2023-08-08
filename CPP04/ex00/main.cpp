/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:16:31 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 19:40:01 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();	   //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();	   //will output the WrongAnimal sound!
		meta->makeSound();

		delete i;
	}
	return 0;
}