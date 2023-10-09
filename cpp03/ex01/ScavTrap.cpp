/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:50:28 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:29 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "main";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src){
    std::cout << "ScavTrap copy asignement called" << std::endl;
    if (this != &src){
        this->name = src.name;
        this->attackDamage = src.attackDamage;
        this->hitPoint = src.hitPoint;
        this->energyPoint = src.energyPoint;
    }
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->hitPoint && this->energyPoint)
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << "have no energyPoint or hitPoint" << std::endl;
}

void ScavTrap::guardGate(void){
    if (this->hitPoint == 0)
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode" << std::endl;
}
