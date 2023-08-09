/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:35:40 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/09 15:15:54 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef Floor_HPP
#define Floor_HPP

class AMateria;

typedef struct s_obj
{
	AMateria* materia;
	struct s_obj* next;
} t_obj;

class Floor
{
   private:
	Floor(void);
	Floor(const Floor& src);
	Floor& operator=(Floor const& obj);

	static Floor* instance;
	t_obj head;

   public:
	virtual ~Floor(void);
	static Floor* FindFloor();
	void addToFloor(AMateria* materia);
	AMateria* getFromFloor();
	static void deleteFloor();
};

#endif