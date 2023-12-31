/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:49:57 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:50:01 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap player1;
    ClapTrap p2(player1);
    ClapTrap player2("hassan");

    p2.attack("mouad");
    player1.takeDamage(5); 
    player1.beRepaired(2);
}
