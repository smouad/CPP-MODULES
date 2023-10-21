/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:24 by msodor            #+#    #+#             */
/*   Updated: 2023/10/21 15:32:23 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	PmergeMe pmergeMe;
	pmergeMe.vectorPair(av[1]);
	pmergeMe.sortPairs();
	pmergeMe.vectorPrint();
	return 0;
}