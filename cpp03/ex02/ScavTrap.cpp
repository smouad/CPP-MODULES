/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:51:19 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:51:20 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << "ScavTrap " << this->name << " created with default constructor." << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << this->name << " created." << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src){
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src){
    ClapTrap::operator=(src);
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->hitPoint && this->energyPoint)
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << std::endl;
    else
        std::cout << "ScavTrap " << this->name << "have no energyPoint or hitPoint" << std::endl;
}

void ScavTrap::guardGate(void){
    if (this->hitPoint == 0)
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode" << std::endl;
}
