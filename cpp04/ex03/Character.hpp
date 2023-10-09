/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:55:59 by msodor            #+#    #+#             */
/*   Updated: 2023/10/04 18:30:45 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct	s_inventory
{
	AMateria* materia;
	struct s_inventory *next;
}				t_inventory;

class Character :public ICharacter {
private:
	AMateria* inventory[4];
	std::string name;
	t_inventory *head;
public:
	Character();
	Character(std::string name);
	Character(const Character& src);
	~Character();
	Character& operator=(const Character& src);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif