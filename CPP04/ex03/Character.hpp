/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:31:57 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 14:52:12 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
#define Character_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
   private:
	AMateria* materia[4];
	int idx;

   public:
	Character(void);
	Character(const Character& src);
	virtual ~Character(void);
	Character& operator=(Character const& obj);

	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif