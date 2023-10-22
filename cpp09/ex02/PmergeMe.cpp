/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/22 17:54:51 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// std::vector<std::vector<int> > parsInput(std::string input)
// {
// 	std::vector<std::vector<int> > elems;
// 	std::vector<int> elem;
// 	std::stringstream ss(input);
// 	int tocken;
// 	while (ss >> tocken){
// 		elem.push_back(tocken);
// 		elems.push_back(elem);
// 	}
// 	return elems;
// }
std::vector<std::vector<int> > parsInput(std::string input)
{
	std::vector<std::vector<int> > elems;
	std::vector<int> elem;
	std::stringstream ss(input);
	int nbr;

	while (ss >> nbr){
		elem.push_back(nbr);
		elems.push_back(elem);
		elem.clear();
	}
	return elems;
}

void mergeInsertion(std::vector<std::vector<int> >& elems)
{
	std::vector<std::vector<int> >::iterator it = elems.begin();
	while (it != elems.end()) // iterate until the second last element
	{
		std::vector<int>::iterator it1_last = (it->end() - 1);
		std::vector<int>::iterator it2_last = ((it + 1)->end() - 1);
		if (*it1_last > *it2_last && it->size() == (it + 1)->size()) // check if last element of first vector is greater than last element of second vector
			std::swap(*it, *(it + 1)); // swap the two vectors
		// std::vector<int>::iterator it1 = it + 1->begin();
		// while ()
		it+= 2;
	}
}

void print(std::vector<std::vector<int> >& elems)
{
	std::vector<std::vector<int> >::iterator it = elems.begin();
	while (it != elems.end())
	{
		std::vector<int>::iterator it2 = it->begin();
		std::cout << "pair: [";
		while (it2 != it->end())
		{
			std::cout << *it2 ;
			if (it2 + 1 != it->end())
				std::cout << ", ";
			it2++;
		}
		std::cout << "]"<< std::endl;
		it++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::vector<std::vector<int> > elems = parsInput(argv[1]);
	mergeInsertion(elems);
	print(elems);
	return 0;
}