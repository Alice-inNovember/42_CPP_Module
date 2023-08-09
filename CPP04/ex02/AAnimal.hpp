/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:56:52 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 13:29:15 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#define AANIMAL "AAnimal"
#define AANIMALSOUND ""

#include "string"

class AAnimal
{
   protected:
	std::string type;
	AAnimal(void);
	AAnimal(const AAnimal& src);

   public:
	virtual ~AAnimal(void);
	AAnimal& operator=(AAnimal const& obj);

	std::string const getType() const;
	virtual void makeSound() const = 0;
};

#endif