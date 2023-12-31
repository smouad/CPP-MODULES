/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:50:23 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:24 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap alice("Alice");

	alice.attack("Mike");
    alice.takeDamage(10);
    alice.beRepaired(5);
	alice.guardGate();
}
