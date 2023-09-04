/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:00:57 by msodor            #+#    #+#             */
/*   Updated: 2023/08/20 13:32:30 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int count = 3;
	Zombie *group = zombieHorde(count, "hamza");

	for (size_t i = 0; i < count; i++)
		group[i].announce();
	delete []group;
}