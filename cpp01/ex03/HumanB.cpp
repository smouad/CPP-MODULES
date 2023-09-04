/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:00:59 by msodor            #+#    #+#             */
/*   Updated: 2023/09/03 16:36:36 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(){
}

HumanB::HumanB(std::string name){
  this->name = name;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon weapon){
  this->weapon = weapon;
}

void  HumanB::attack(){
  std::cout << name << " attacks with teir" << weapon.getType() << std::endl;
}
