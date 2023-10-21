/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:28 by msodor            #+#    #+#             */
/*   Updated: 2023/10/21 18:25:00 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){ }

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src){
		this->pairs = src.pairs;
	}
	return *this;
}

PmergeMe::~PmergeMe(){ }

void PmergeMe::vectorPair(std::string input)
{
	std::stringstream ss(input.c_str());
	int nbr;
	
	while (ss >> nbr)
	{
		std::vector<int> pair;
		pair.push_back(nbr);
		if (ss >> nbr)
			pair.push_back(nbr);

		pairs.push_back(pair);
	}	
}

void PmergeMe::vectorPrint()
{
	std::vector<std::vector<int> >::iterator it = pairs.begin();
	while (it != pairs.end())
	{
		std::vector<int>::iterator it2 = (*it).begin();
		std::cout << "Pair: [";
		while (it2 != (*it).end())
		{
			std::cout << *it2 ;
			if (it2 + 1 != (*it).end())
				std::cout << ", ";
			it2++;
		}
		std::cout << "]" << std::endl;
		it++;
	}
}

void PmergeMe::sortPairs()
{
	std::vector<std::vector<int> >::iterator it = pairs.begin();
	while (it != pairs.end()){
		if (it->front() > it->back())
			std::swap(it->front(), it->back());
		it++;
	}
}

std::vector<int>	PmergeMe::mergePairs(std::vector<int> a, std::vector<int> b)
{
	std::vector<int> result;
	std::vector<int>::iterator it = a.begin();
	std::vector<int>::iterator it2 = b.begin();
	
	while (it != a.end() || it2 != b.end())
	{
		if (it == a.end())
		{
			result.push_back(*it2);
			it2++;
		}
		else if (it2 == b.end())
		{
			result.push_back(*it);
			it++;
		}
		else if ((*it)++ < (*it2)++)
		{
			result.push_back(*it);
			it++;
		}
		else
		{
			result.push_back(*it2);
			it2++;
		}
	}
	return result;
}


