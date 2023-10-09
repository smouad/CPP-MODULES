/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:43:36 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 12:02:17 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type): type(type){
}

AMateria::AMateria(AMateria const & src){
	if (this != &src)
		*this = src;
}

AMateria::~AMateria(){}

AMateria & AMateria::operator=(AMateria const & src){
	if (this != &src)
		this->type = src.type;
	return *this;
}

const std::string& AMateria::getType() const{
	return (this->type);
}

void AMateria::use(ICharacter& target){
	(void)target;
}
