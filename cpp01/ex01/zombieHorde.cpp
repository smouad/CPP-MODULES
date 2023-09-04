/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:01:05 by msodor            #+#    #+#             */
/*   Updated: 2023/08/20 13:30:13 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return(zombies);
}
