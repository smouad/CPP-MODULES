#include "ClapTrap.hpp"

int main(){
    ClapTrap player1("mouad");
    ClapTrap player2("hassan");
    ClapTrap player3(player2);

    player2.attack("hassan");
    player1.takeDamage(2);
}
