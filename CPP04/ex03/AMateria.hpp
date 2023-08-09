/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:27:18 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 14:47:26 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
#define AMateria_HPP

#include <string>
class ICharacter;

class AMateria
{
   protected:
	AMateria(void);
	AMateria(const AMateria& src);
	std::string type;

   public:
	AMateria(std::string const& type);

	AMateria& operator=(AMateria const& obj);
	virtual ~AMateria(void);

	std::string const& getType() const;	   //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif