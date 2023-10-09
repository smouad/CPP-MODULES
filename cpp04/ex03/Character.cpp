/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:42:37 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 13:16:20 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	list_add(t_inventory **head, AMateria *materia){
	t_inventory *new_node = new t_inventory;
	t_inventory *last = *head;

	new_node->materia = materia;
	new_node->next = NULL;
	if (*head == NULL){
		*head = new_node;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
}

Character::Character(){
	this->name = "default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->head = NULL;
}

Character::Character(std::string name){
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->head = NULL;
}

Character::Character(const Character& src){
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->inventory[i] = NULL;
		this->head = NULL;
		*this = src;
	}
}

Character& Character::operator=(const Character& src){
	if (this != &src){	
	this->name = src.name;
	for (int i = 0; i < 4; i++)
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
	}
	return *this;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	while (this->head != NULL){
		t_inventory *tmp = this->head;
		this->head = this->head->next;
		delete tmp->materia;
		delete tmp;
	}
}

const std::string& Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria* materia){
	for (int i = 0; i < 4; i++)
		if (!this->inventory[i]){
			this->inventory[i] = materia->clone();
			return;
		}
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	list_add(&this->head, this->inventory[idx]);
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}