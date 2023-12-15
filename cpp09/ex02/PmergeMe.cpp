/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:39:05 by msodor            #+#    #+#             */
/*   Updated: 2023/10/26 23:04:11 by msodor           ###   ########.fr       */
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

int jacobStahl(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return (jacobStahl(n - 1) + 2 * jacobStahl(n - 2));
}

std::vector<int> jacobStahlSeq(std::vector<std::vector<int> > elems)
{
  int jacob = 2;
  std::vector<int> jacobSeq;
  while (jacobStahl(jacob) < static_cast<int>(elems.size())){
    jacobSeq.push_back(jacobStahl(jacob));
    jacob++;
  }
  std::vector<int> jacobSeq2;
  for (std::vector<int>::iterator it = jacobSeq.begin(); it != jacobSeq.end(); ++it){
    if (it + 1 != jacobSeq.end())
      jacobSeq2.push_back(*(it + 1) - *it);
    else
      jacobSeq2.push_back(elems.size() - *it);
  }
  return jacobSeq2;
  // return jacobSeq;
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

int comp;
bool compair(std::vector<int> a, std::vector<int> b)
{
  comp++;
  return a.back() <= b.back();
}

void insertSortedByLastElement(std::vector<std::vector<int> >& mainChain, std::vector<std::vector<int> >& pend)
{
  // std::cout << "mainChain: ";
  // printVector(mainChain);
  // std::cout << "pend: ";
  // printVector(pend);
  std::vector<int> jacobStahl = jacobStahlSeq(pend);

  std::cout << "jacobStahl: ";
  unsigned int seq[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
  mainChain.insert(mainChain.begin(), pend.front());
  pend.erase(pend.begin());
  size_t first = 0;
  size_t second = 0;
  size_t k = 0;
  size_t sum = 0;
  // }
  // std::cout << std::endl;
  for (std::vector<std::vector<int> >::iterator it = pend.begin(); it != pend.end(); ++it){
    first = seq[k + 1];// 3
    second = seq[k] + 1;  //1 + 1
    if (first > pend.size())
      first = pend.size();
    while (first >= second){
      std::vector<std::vector<int> >::iterator insertPos = std::lower_bound(mainChain.begin(), mainChain.begin() + first + sum, *it, compair);
      mainChain.insert(insertPos, *it);
      sum++;
      first--;
    }
    k++;
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
		if (*it1_last > *it2_last){
      comp++;
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
  std::cout << comp << std::endl;
}

