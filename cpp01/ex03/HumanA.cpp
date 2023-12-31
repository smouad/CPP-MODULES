/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:00:51 by msodor            #+#    #+#             */
/*   Updated: 2023/09/06 17:34:27 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon){
	this->name = name;
}

HumanA::~HumanA(){

}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}