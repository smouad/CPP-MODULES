/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:00:51 by msodor            #+#    #+#             */
/*   Updated: 2023/09/03 16:37:03 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
}

HumanA::HumanA(std::string name, Weapon weapon){
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}