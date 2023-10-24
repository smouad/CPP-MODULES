/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:24 by msodor            #+#    #+#             */
/*   Updated: 2023/10/24 15:45:51 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::vector<std::vector<int> > elems = parsInput(argv);
	mergeInsertion(elems);
	// print(elems);
	return 0;
}