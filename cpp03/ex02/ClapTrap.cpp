/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:49:31 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:04 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "main";
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src){
    std::cout << "ClapTrap copy constructor called" << std::endl;
   *this = src; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src){
    std::cout << "ClapTrap coppy asingement called" << std::endl;
    if (this != &src){
        this->name = src.name;
        this->hitPoint = src.hitPoint;
        this->energyPoint = src.energyPoint;
        this->attackDamage = src.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (this->hitPoint && this->energyPoint){
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoint -= 1;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no hitPoint or energyPoint left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hitPoint){
        std::cout << "ClapTrap " << this->name << " took " << amount << " of damage" << std::endl;
        this->hitPoint -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " No hitPoint left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->hitPoint <= 10 && this->energyPoint){
        std::cout << "ClapTrap " << this->name << " repaired " << amount << " of hitPoint" << std::endl;
        this->hitPoint += amount;
        this->energyPoint -= 1;
    }
    else if (this->hitPoint == 0 || this->energyPoint == 0)
        std::cout << "ClapTrap " << this->name << " has no hitPoint or energyPoint left" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " hitPoint full" << std::endl;
}
