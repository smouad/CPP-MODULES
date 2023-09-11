/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:01:19 by msodor            #+#    #+#             */
/*   Updated: 2023/09/06 16:10:30 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string weapon){
	this->type = weapon;
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(){
	return (this->type);
}

void Weapon::setType(std::string newType){
	this->type = newType;
}