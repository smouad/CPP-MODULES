#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap " << this->name << " created with default constructor." << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << this->name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src){
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src){
    ClapTrap::operator=(src);
    return (*this);
}

ScavTrap::~ScavTrap(){
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
