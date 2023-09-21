/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:51:10 by msodor            #+#    #+#             */
/*   Updated: 2023/09/21 15:51:11 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag1("Goku");
    FragTrap frag2("Vegeta");


    frag1.attack("hassan");
    frag2.takeDamage(30);
    frag2.beRepaired(5);

    frag2.attack("driss");
    frag1.takeDamage(30);
    frag1.beRepaired(15);

    frag1.highFivesGuys();
    frag2.highFivesGuys();

    return 0;
}
