/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:30 by msodor            #+#    #+#             */
/*   Updated: 2023/12/16 23:11:32 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <utility>
#include <sstream>
#include <string>

extern int comp;

void printVector(std::vector<std::vector<int> >& elems);
std::vector<std::vector<int> > parsInput(char **av);
void mergeInpairs(std::vector<std::vector<int> >& elems);
void mergeInsertion(std::vector<std::vector<int> >& elems);
std::vector<int> jacobStahlSeq(int n);
bool compair(std::vector<int> a, std::vector<int> b);



void mergeInsertionlist(std::list<std::list<int> >& elems);
void printList(std::list<std::list<int> >& elems);

#endif