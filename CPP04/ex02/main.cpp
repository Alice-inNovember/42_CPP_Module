/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:16:31 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 13:29:28 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main()
{
	// AAnimal animal;
	std::cout << "==============================" << std::endl;
	{
		AAnimal* animals[10];

		for (int i = 0; i < 5; i++) {
			animals[i] = new Dog;
			animals[i + 5] = new Cat;
		}

		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
	std::cout << "==============================" << std::endl;
	{
		Cat a;
		Cat b;

		a.brainStorm("a");
		a.brainStorm("b");
		a.brainStorm("c");

		std::cout << "a : ";
		a.talkIdeas();
		std::cout << "b : ";
		b.talkIdeas();
		b = a;
		std::cout << "b : ";
		b.talkIdeas();
	}
	std::cout << "==============================" << std::endl;
	//system("Leaks ex02");
	return 0;
}