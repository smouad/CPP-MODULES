/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:39:05 by msodor            #+#    #+#             */
/*   Updated: 2023/12/16 23:11:10 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int comp = 0;

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

  if (elems.empty()) {
    return; // Nothing to split in an empty vector.
  }

  int mid = elems[0].size() / 2;

  for (std::vector<std::vector<int> >::iterator it = elems.begin(); it != elems.end(); ++it) {
    std::vector<int>::iterator it1 = it->begin();

    while (it1 != it->end()) {
      std::vector<int> pair;
      for (int j = 0; j < mid && it1 != it->end(); j++) {
        pair.push_back(*it1);
        ++it1;
      }
        new_elems.push_back(pair);
      }
  }
  elems = new_elems;
}

std::vector<int> jacobStahlSeq(int n)
{
    std::vector<int> seq;
    seq.push_back(0);
    seq.push_back(1);
    int tmp;


    int i = 2;
    tmp = 0;
    while (tmp < n)
    {
        tmp = seq[i - 1] + 2 * seq[i - 2];
        if (tmp > n)
            tmp = n;
        else
            seq.push_back(tmp);
        i++;
    }
    seq.erase(seq.begin());
    seq.erase(seq.begin());
    return seq;
}

bool compair(std::vector<int> a, std::vector<int> b)
{
  comp++;
  return a.back() <= b.back();
}

void insertSortedByLastElement(std::vector<std::vector<int> >& mainChain, std::vector<std::vector<int> >& pend)
{
  std::vector<int> seq = jacobStahlSeq(pend.size());

  int prev = 0;
  int lbg = 0;
  int jacob = 0;
  for (size_t i = 0; i < seq.size(); i++)
  {
    jacob = seq[i];
    while (jacob > prev)
    {
      if (jacob - 1 == 0){
        lbg++;
        mainChain.insert(mainChain.begin(), pend[jacob - 1]);
      }

      else
      {
        std::vector<std::vector<int> >::iterator insertPos = std::lower_bound(mainChain.begin(), mainChain.begin() + lbg + jacob - 1, pend[jacob - 1], compair);
        mainChain.insert(insertPos, pend[jacob - 1]);
        lbg++;
      }
      jacob--;
    }
    prev = seq[i];
  }
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
    comp++;
		if (*it1_last > *it2_last){
			std::swap(*it, *(it + 1));
    }
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
  insertSortedByLastElement(mainChain, pend);
  elems = mainChain;
}

