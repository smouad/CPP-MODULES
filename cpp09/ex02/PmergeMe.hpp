/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:30 by msodor            #+#    #+#             */
/*   Updated: 2023/10/21 18:26:07 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <sstream>
#include <string>

class PmergeMe{
public:
	//canonial form
	PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator=(const PmergeMe& src);
	~PmergeMe();
	
	//methods
	void vectorPair(std::string input);
	void vectorPrint();
	void sortPairs();

private:
	std::vector< std::vector<int> > pairs;
};
#endif