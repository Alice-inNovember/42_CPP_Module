/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:20:01 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 14:25:01 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
   private:
   public:
	Ice(void);
	Ice(const Ice& src);
	virtual ~Ice(void);
	Ice& operator=(Ice const& obj);
	AMateria* clone() const = 0;
	void use(ICharacter& target);
};

#endif