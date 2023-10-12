/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:48:37 by msodor            #+#    #+#             */
/*   Updated: 2023/10/12 17:32:51 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(){ }

Serialize::Serialize(const Serialize &src){
	if (this != &src)
		*this = src;
}

Serialize::~Serialize(){ }

Serialize &Serialize::operator=(const Serialize &rhs){
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

uintptr_t Serialize::serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialize::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}
