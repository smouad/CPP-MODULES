/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:05:31 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 12:02:07 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const & src){
	if (this != &src)
		*this = src;
}

Cure::~Cure(){}

Cure & Cure::operator=(Cure const & src){
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
