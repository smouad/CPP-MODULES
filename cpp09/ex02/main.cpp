/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:24 by msodor            #+#    #+#             */
/*   Updated: 2023/12/16 23:11:20 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	clock_t start, end;
	double time_taken;
	if (argc == 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::vector<std::vector<int> > elems = parsInput(argv);
	std::cout << "before mergeInpairs: ";
	printVector(elems);
	start = clock();
	mergeInsertion(elems);
	end = clock();
	time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	std::cout << "after mergeInpairs: ";
	printVector(elems);
	std::cout << "time taken by mergeInpairs is: " <<  time_taken << " us" << std::endl;
	std::cout << "comp: " << comp << std::endl;
	return 0;
}
