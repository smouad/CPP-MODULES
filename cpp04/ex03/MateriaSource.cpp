/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:08:18 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 12:14:53 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src){
	if (this != &src)
		*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src){
	if (this != &src)
		for (int i = 0; i < 4; i++)
			this->inventory[i] = src.inventory[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

void MateriaSource::learnMateria(AMateria* materia){
	for (int i = 0; i < 4; i++)
		if (!this->inventory[i]){
			this->inventory[i] = materia;
			return ;
		}
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	return NULL;
}