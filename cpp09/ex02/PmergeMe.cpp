/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:39:05 by msodor            #+#    #+#             */
/*   Updated: 2023/10/25 00:37:09 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printVectorInt(std::vector<int> vectorInt)
{
	std::vector<int>::iterator it = vectorInt.begin();
  std::cout << "\033[1;34m[" << "\033[0m";
	while (it != vectorInt.end())
	{
		std::cout << *it ;
		if (it + 1 != vectorInt.end())
			std::cout << ", ";
		it++;
	}
  std::cout << "\033[1;34m]" << "\033[0m";
}

void printVector(std::vector<std::vector<int> >& elems)
{
	std::vector<std::vector<int> >::iterator it = elems.begin();
  std::cout << "\033[1;31m[" << "\033[0m";
	while (it != elems.end())
	{
    printVectorInt(*it);
		it++;
	}
  std::cout << "\033[1;31m]" << "\033[0m" << std::endl;
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


void splitVector(std::vector<std::vector<int> >& elems)
{
	std::vector<std::vector<int> > new_elems;
	std::vector<int> pair;
	int mid = elems.at(0).size() / 2;
	int splitNbr = elems.size() * 2;
	std::vector<std::vector<int> >::iterator it = elems.begin();
	int i = 0;
	while (it != elems.end()){
		std::vector<int>::iterator it1 = it->begin();
		while (i < splitNbr){
			for (int j = 0; j < mid && it1 != it->end(); j++){
				pair.push_back(*it1);
				it1++;
			}
			i++;
			new_elems.push_back(pair);
			pair.clear();
      if (i % 2 == 0)
        it++;
		}
	}
	elems = new_elems;
}


void mergeInsertion(std::vector<std::vector<int> >& elems)
{
	std::vector<int> remain;
  std::vector<std::vector<int> > mainChain;
  std::vector<std::vector<int> > pend; 

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
	if (elems.size() > 1){
		mergeInsertion(elems);
	}
	if (elems.at(0).size() > 1){
		splitVector(elems);
	}
  for (std::vector<std::vector<int> >::iterator it = elems.begin(); it != elems.end(); it++){
    pend.push_back(*it);
    it++;
    if (it != elems.end())
      mainChain.push_back(*it);
  }
  if (remain.size())
    pend.push_back(remain);
	std::cout << "mergeInsertion rev" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "main" << std::endl;
	printVector(mainChain);
	std::cout << "pend" << std::endl;
	printVector(pend);
	std::cout << "-----------------------" << std::endl;
}



