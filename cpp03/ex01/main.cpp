#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	ScavTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.guardGate();

	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
/* 	bob_rundown(); */
}
