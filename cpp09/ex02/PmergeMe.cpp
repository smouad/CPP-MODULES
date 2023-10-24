/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:39:05 by msodor            #+#    #+#             */
/*   Updated: 2023/10/24 15:01:43 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"

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

std::vector<std::vector<int> > parsInput(char **av)
{
	std::vector<std::vector<int> > elems;
  std::vector<int> pair;
  for (int i = 1; av[i]; i++){
    std::string str = av[i];
    std::stringstream ss(str);
    int token;
    ss >> token;
    pair.push_back(token);
    elems.push_back(pair);
    pair.clear();
  }
	return elems;
}

void mergeInpairs(std::vector<std::vector<int> >& elems)
{
	std::vector<std::vector<int> > new_elems;

	std::vector<int> pair;
	std::vector<std::vector<int> >::iterator it = elems.begin();
	while (it != elems.end()){
		std::vector<int>::iterator it1 = it->begin();
		std::vector<int>::iterator it2 = (it + 1)->begin();
		while(it1 != (it)->end()){
			pair.push_back(*it1);
			it1++;
		}
		while(it2 != (it + 1)->end()){
			pair.push_back(*it2);
			it2++;
		}
		new_elems.push_back(pair);
		pair.clear();
		it+= 2;
	}
	elems = new_elems;
}

void printRemain(std::vector<int> remain)
{
	std::vector<int>::iterator it = remain.begin();
	std::cout << "remain: [";
	while (it != remain.end())
	{
		std::cout << *it ;
		if (it + 1 != remain.end())
			std::cout << ", ";
		it++;
	}
	std::cout << "]"<< std::endl;
}

void mergeInsertion(std::vector<std::vector<int> >& elems)
{
	// std::cout << "mergeInsertion" << std::endl;
	// std::cout << "-----------------------" << std::endl;
	// print(elems);
	// std::cout << "-----------------------" << std::endl;
	std::vector<int> remain;

	if (elems.size() % 2 != 0){
		remain = elems.back();
		elems.pop_back();
	}

	std::vector<std::vector<int> >::iterator it = elems.begin();
	while (it != elems.end())
	{
		std::vector<int>::iterator it1_last = (it->end() - 1);
		std::vector<int>::iterator it2_last = ((it + 1)->end() - 1);
		if (*it1_last > *it2_last)
			std::swap(*it, *(it + 1));
		it+= 2;
	}
	mergeInpairs(elems);
	if (elems.size() > 1)
		mergeInsertion(elems);

	printRemain(remain);
}



