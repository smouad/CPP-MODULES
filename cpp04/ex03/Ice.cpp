/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:05:33 by msodor            #+#    #+#             */
/*   Updated: 2023/10/07 12:01:56 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::~Ice(){}

Ice::Ice(Ice const & src){
	if (this != &src)
		*this = src;
}

Ice & Ice::operator=(Ice const & src){
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}