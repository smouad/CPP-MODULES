#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src){
   *this = src; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src){
    if (this != &src){
        this->name = src.name;
        this->hitPoint = src.hitPoint;
        this->energyPoint = src.energyPoint;
        this->attackDamage = src.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(){
}

void ClapTrap::attack(const std::string& target){
    if (this->hitPoint && this->energyPoint){
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!";
        this->energyPoint -= 1;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no hitPoint or energyPoint left";
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hitPoint){
        std::cout << "ClapTrap " << this->name << " took " << amount << " of damage";
        this->hitPoint -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " No hitPoint left";
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->hitPoint && this->energyPoint){
        std::cout << "ClapTrap " << this->name << " repaired " << amount << " of hitPoint";
        this->hitPoint += amount;
        this->energyPoint -= 1;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no hitPoint or energyPoint left";
}
