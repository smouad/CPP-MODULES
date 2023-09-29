/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:50:58 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:59 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "main";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src){
    std::cout << "FragTrap coppy constructor called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src){
    std::cout << "FragTrap coppy asignement called" << std::endl;
    if (this != &src){
        this->name = src.name;
        this->hitPoint = src.hitPoint;
        this->energyPoint = src.energyPoint;
        this->attackDamage = src.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if (this->hitPoint && this->energyPoint)
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << std::endl;
    else
        std::cout << "FragTrap " << this->name << "have no energyPoint or hitPoint" << std::endl;
}

void FragTrap::highFivesGuys(void){
    if (this->hitPoint == 0)
        std::cout << "FragTrap " << this->name << " is dead" << std::endl;
    else
        std::cout << "FragTrap " << this->name << " Highfive guys anyone ?" << std::endl;
}
